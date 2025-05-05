@interface SaaSIESECLiveShortTouchInterfaceIESECBridger : NSObject
@property (nonatomic) <IESLiveSaaSShortTouchContainer> protoObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createShortItem;
- (id)createPluginView;
- (BOOL)enableEntranceAnimation;
- (BOOL)entranceScaleAnimationDisabled;
- (BOOL)hasCoupon;
- (id)initialFrameOfAnimationView;
- (void)insertItem:completion:;
- (id)protoObj;
- (void)removeCoupon;
- (void)setProtoObj:;
- (void)startEntranceAnimation:appearAction:;
- (void).cxx_destruct;
- (BOOL)containsType:;
- (void)removeType:;
+ (id)bridgedProtocol;
+ (id)bridgedInstanceWithObj:;
@end
