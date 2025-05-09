@interface IESECListKitLottiePendantView : UIView
@property (nonatomic) NSString clickId;
@property (nonatomic) NSString containerId;
@property (nonatomic) NSString envIdentifier;
@property (nonatomic) NSURL url;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) IESECListKitXBridgeEcLottieMountMethodParamModel currentParams;
@property (nonatomic) IESECListKitItemDataModel dataModel;
- (id)clickId;
- (void)setupLottieView;
- (void)addToView:;
- (id)currentParams;
- (id)findLottieJSONPath:;
- (void)removeCurrentView;
- (void)setClickId:;
- (void)setCurrentParams:;
- (id)containerId;
- (id)url;
- (void)dealloc;
- (void)setContainerId:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
- (void)tapHandler;
- (id)animationView;
- (void)setAnimationView:;
- (void)setEnvIdentifier:;
- (id)envIdentifier;
+ (void)dismissLottiePendantView:containerId:;
+ (BOOL)dismissLottiePendantView:uuid:;
+ (id)findPendantViewWith:;
+ (id)lottiePendantViews;
+ (void)removeAllPendantView;
+ (void)setLottiePendantViews:;
+ (id)showPendantInView:withParams:envIdentifier:;
@end
