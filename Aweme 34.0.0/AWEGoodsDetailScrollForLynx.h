@interface AWEGoodsDetailScrollForLynx : LynxUI
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) NSNumber preDistance;
@property (nonatomic) NSString pageSessionID;
- (id)pageSessionID;
- (id)preDistance;
- (void)setPreDistance:;
- (void)emitEvent:detail:;
- (void)setPageSessionID:;
- (void)setPageSessionID:requestReset:;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
- (id)createView;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__561;
@end
