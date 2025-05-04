@interface AWEDesktopLiveActivityPopupManager : NSObject
@property (nonatomic) AWEDesktopLiveActivityPopupViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showLiveActivityAskViewWithModel:completion:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
