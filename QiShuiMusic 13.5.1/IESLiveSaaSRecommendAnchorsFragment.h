@interface IESLiveSaaSRecommendAnchorsFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSRecommendAnchorsStore store;
@property (nonatomic) IESLiveSaaSRecommendAnchorsPopView popView;
@property (nonatomic) q orientation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)popView;
- (void)componentDidAppear;
- (void)componentDidUnmount;
- (void)componentOrientationChanged:;
- (void)hidePopView;
- (void)setPopView:;
- (void)showRecommendUserRoomsWithDisplayTime:;
- (void)updateCellStatus;
- (void)setStore:;
- (long long)orientation;
- (void).cxx_destruct;
- (id)store;
- (void)setOrientation:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
