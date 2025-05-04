@interface AWEIMHalfScreenGroupNoticeEditViewController : AWEIMGroupNoticeEditViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIViewController groupSettingVC;
@property (nonatomic) UITextView contentTextView;
- (double)minViewHeightForHalfScreen;
- (void)updateTemplateViewLayoutWithKeboardShow:userInfo:;
- (void)viewDidLoad;
@end
