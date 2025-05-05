@interface BDXGlobalPropsService : NSObject
@property (nonatomic) BDXDefaultGlobalProps defaultGlobalProps;
- (id)containerGlobalPropsWithCardModel:;
- (id)defaultGlobalProps;
- (id)defaultGlobalPropsWithEngineType:;
- (id)dictFromGlobalProps:;
- (void)injectGlobalProps:toContainer:;
- (void)setDefaultGlobalProps:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)setup;
+ (void)orientationDidChange;
@end
