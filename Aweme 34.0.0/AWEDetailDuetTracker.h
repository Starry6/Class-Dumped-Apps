@interface AWEDetailDuetTracker : NSObject
@property (nonatomic) AWEDetailDuetViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEnterPersonalDetailWithModel:;
- (void)trackDetailPageClientShowWithModel:;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (id)initWithStateContext:;
- (void)trackCollectActionWithCollectStatus:;
- (void)trackEnterDuetDetail;
- (void)trackDuetEntranceShow;
- (void)trackDuetEntranceClick;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
