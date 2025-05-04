@interface AWEQuickShareSnackBar : UIView
@property (nonatomic) UIView bodyView;
@property (nonatomic) AFDSnackBar snackBar;
@property (nonatomic) <AWEQuickShareSnackBarDelegate> delegate;
@property (nonatomic) <AWEShareToStoryModelProtocol> storyModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanContext;
- (void)showSnackBar;
- (void)snackBarDismissDueToTouchSpace;
- (void)snackBarDismissDueToTimeOut;
- (id)snackBar;
- (void)setSnackBar:;
- (void)snackBarEditButtonDidClick;
- (id)initWithDelegate:storyModel:;
- (void)show;
- (id)delegate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)bodyView;
- (void)setBodyView:;
- (void)setStoryModel:;
- (id)storyModel;
@end
