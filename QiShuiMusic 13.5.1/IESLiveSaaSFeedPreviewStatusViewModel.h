@interface IESLiveSaaSFeedPreviewStatusViewModel : NSObject
@property (nonatomic) IESLiveSaaSFeedOperationModel operationModel;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel elementModel;
@property (nonatomic) BOOL isInLive;
@property (nonatomic) BOOL disableShowPageTitle;
@property (nonatomic) BOOL showCountDown;
@property (nonatomic) q countDownSeconds;
- (id)initWithRoomModel:elementModel:;
- (BOOL)disableShowPageTitle;
- (id)elementModel;
- (BOOL)isInLive;
- (id)operationModel;
- (void)setDisableShowPageTitle:;
- (void)setElementModel:;
- (void)setIsInLive:;
- (void)setOperationModel:;
- (void)setShowCountDown:;
- (BOOL)showCountDown;
- (void).cxx_destruct;
- (long long)countDownSeconds;
- (void)setCountDownSeconds:;
@end
