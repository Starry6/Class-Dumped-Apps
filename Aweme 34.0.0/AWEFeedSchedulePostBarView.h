@interface AWEFeedSchedulePostBarView : UIView
@property (nonatomic) UIViewController contextViewController;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEFeedBottomBarVideoSchedulePostEntranceView entranceView;
@property (nonatomic) <AFDVideoPrivacyButtonControllerProtocol> privacyButtonController;
@property (nonatomic) AWEFeedSchedulePostReviewViewModel reviewViewModel;
@property (nonatomic) AWEFeedSchedulePostBarController barController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)sheetDidClickCloseButton:;
- (void)sheetWillDismiss:;
- (void)updateWithAwemeModel:;
- (id)entranceView;
- (void)setEntranceView:;
- (id)barController;
- (void)setBarController:;
- (id)privacyButtonController;
- (void)setPrivacyButtonController:;
- (id)reviewViewModel;
- (BOOL)isReeditButtonShow:;
- (void)trackPopupClick:;
- (void)reeditAction;
- (void)cancelSchedulePostAction;
- (void)updateReviewViewModelWithAwemeModel:;
- (id)contextViewController;
- (void)showReviewViewController;
- (void)trackPopupShow:;
- (void)entranceViewDidTap;
- (void)duxBasicSheet:navigationControllerType:willShowViewController:animated:;
- (void)setContextViewController:;
- (void)setReviewViewModel:;
- (id)initWithFrame:;
- (void)updateLayout;
- (void).cxx_destruct;
@end
