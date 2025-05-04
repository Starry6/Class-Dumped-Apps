@interface AWEInTodayPlayerShareHandler : NSObject
@property (nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> longPressVC;
@property (nonatomic) BOOL isSharing;
- (id)referString;
- (id)longPressVC;
- (void)endControlServerContext:;
- (void)setLongPressVC:;
- (void)addPageIdentifierForTranspondIMShareModels:;
- (BOOL)isSharing;
- (void)showLongPressShareVCWithFromClick:model:publishClick:;
- (void)showNewPressPanelWithAweme:publishClick:scene:;
- (void)setIsSharing:;
- (id)generateLongPressFunctionModelsWithTileModel:;
- (void)shareWithPlayerTileModel:fromClick:publishClick:;
- (void).cxx_destruct;
@end
