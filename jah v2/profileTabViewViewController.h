//
//  profileTabViewViewController.h
//  
//
//  Created by Hanif Hussain on 05/12/2016.
//
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#import "MARKRangeSlider.h"
#import "YIPopupTextView.h"
#import "ActionSheetPicker.h"

@interface profileTabViewViewController : UIViewController<UIImagePickerControllerDelegate, YIPopupTextViewDelegate, UIScrollViewDelegate>{
    
    //scrollview pages for settings and page control
    IBOutlet UIScrollView *settingScrollPage1;
    IBOutlet UIScrollView *settingScrollPage3;
    IBOutlet UIScrollView *settingScrollPage2;
    IBOutlet UIPageControl *pageControl;
    IBOutlet UIScrollView *scrollView;
    UIScrollView *currentScrollView;
    
    //image picker scrollview
    IBOutlet UIScrollView *imageSelectorScroll;
    // 5 user profile images
    IBOutlet UIImageView *userImg1;
    IBOutlet UIImageView *userImg2;
    IBOutlet UIImageView *userImg3;
    IBOutlet UIImageView *userImg4;
    IBOutlet UIImageView *userImg5;
    
    UIImageView *Defaultprofilepic; // our standard default picture to display
    
    //hold our 5 user images in data format for comparison
    NSData *imgData1;
    NSData *imgData2;
    NSData *imgData3;
    NSData *imgData4;
    NSData *imgData5;
    
    //our default picture in data format so we can compare and sort our images in our image selector
    NSData *imgData6;
    
    //top profile pic image
    IBOutlet UIImageView *profilePicHeader;

    //keep track of which image activated touch gesture
    long tag;
    UIImagePickerController *ipc;
    
    //setting edit buttons
    IBOutlet UIButton *bioBtn;
    IBOutlet UIButton *ethnicityBtn;
    IBOutlet UIButton *educationBtn;
    IBOutlet UIButton *hairColourBtn;
    IBOutlet UIButton *eyeColourBtn;
    IBOutlet UIButton *bodyBuildBtn;
    
    //bio text label
    IBOutlet UILabel *BioTextLbl;
    
    //hide or show status bar
    BOOL shouldHideStatusBar;
    
    //UIpicker for ethnic selection and array to hold various ethnicities
    NSArray *ethnicity;
    IBOutlet UITextField *ethnicityLbl; //ethnicity label to display to user
    
    //education label and ui picker array for selection
    NSArray *education;
    IBOutlet UITextField *educationLbl;
    
    //hair colour label and ui picker array for selection
    NSArray *hairColourArr;
    IBOutlet UITextField *hairColourLbl;
    
    //eye colour label and ui picker array for selection
    NSArray *eyeColourArr;
    IBOutlet UITextField *eyeColourLbl;
    
    //body build label and ui picker array for selection
    NSArray * bodyBuildArr;
    IBOutlet UITextField *bodyBuildLbl;
    
    //setting sliders and label
    IBOutlet UISlider *heightSlider;
    IBOutlet UILabel *heightLbl;
    IBOutlet UISlider *weightSlider;
    IBOutlet UILabel *weightLbl;
    
    //Remove user picture buttons
    IBOutlet UIButton *deleteImg1Btn;
    IBOutlet UIButton *deleteImg2Btn;
    IBOutlet UIButton *deleteImg3Btn;
    IBOutlet UIButton *deleteImg4Btn;
    IBOutlet UIButton *deleteImg5Btn;
    
    //keep track of which button activated delete image action
    long deleteBtnTag;
    
}

- (IBAction)changePage:(id)sender;

- (IBAction)bioBtnPress:(id)sender;

- (IBAction)ethnicityBtnPress:(id)sender;

- (IBAction)educationBtnPress:(id)sender;

- (IBAction)setHeight:(id)sender;

- (IBAction)setWeight:(id)sender;

- (IBAction)deleteImage:(id)sender;

- (IBAction)setHairColour:(id)sender;

- (IBAction)setEyeColour:(id)sender;

- (IBAction)setBodyBuild:(id)sender;

@property(nonatomic)CGFloat lastContentOffset;

@end
