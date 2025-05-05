@interface BDPreloadSceneInfo : NSObject
@property (nonatomic) NSString scene;
@property (nonatomic) q flowTrafficSize;
@property (nonatomic) q wifiTrafficSize;
- (long long)flowTrafficSize;
- (long long)wifiTrafficSize;
- (void)setFlowTrafficSize:;
- (void)setWifiTrafficSize:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
@end
