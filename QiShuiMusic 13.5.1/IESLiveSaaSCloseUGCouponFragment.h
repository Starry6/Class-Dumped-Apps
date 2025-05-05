@interface IESLiveSaaSCloseUGCouponFragment : IESLiveRoomComponent
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSCloseCouponProvider couponProvider;
@property (nonatomic) BOOL isCouponWindowShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)closeGuidePriority;
- (void)componentDidMount;
- (id)couponProvider;
- (BOOL)isCouponWindowShowed;
- (id)roomModel;
- (void)setCouponProvider:;
- (void)setIsCouponWindowShowed:;
- (void)setRoomModel:;
- (BOOL)shouldTriggerNotOnlyOnce;
- (void)showCloseUGCouponGuideView;
- (void)showNewCloseUGCouponGuideView;
- (void)showOldCloseUGCouponGuideView;
- (BOOL)triggerCloseGuideIfNeed;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
