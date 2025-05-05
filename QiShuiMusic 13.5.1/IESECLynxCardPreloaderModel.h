@interface IESECLynxCardPreloaderModel : IESECListKitCardPreloaderModel
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) NSDictionary rootGlobalProps;
@property (nonatomic) BOOL useForest;
@property (nonatomic) q threadStrategy;
@property (nonatomic) NSArray bridgeInstances;
@property (nonatomic) NSArray xbridgeInstances;
@property (nonatomic) <IESECListCardsContextDelegate> listCardsContextDelegate;
- (void)setGlobalProps:;
- (id)bridgeInstances;
- (id)rootGlobalProps;
- (id)globalProps;
- (id)listCardsContextDelegate;
- (void)setBridgeInstances:;
- (void)setListCardsContextDelegate:;
- (void)setRootGlobalProps:;
- (void)setThreadStrategy:;
- (void)setUseForest:;
- (void)setXbridgeInstances:;
- (long long)threadStrategy;
- (BOOL)useForest;
- (id)xbridgeInstances;
- (void).cxx_destruct;
@end
