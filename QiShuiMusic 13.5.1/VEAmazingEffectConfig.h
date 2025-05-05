@interface VEAmazingEffectConfig : NSObject
@property (nonatomic) NSDictionary algorithmConfig;
@property (nonatomic) BOOL enableAlgorithmAsync;
@property (nonatomic) NSString algoCachePath;
- (id)algorithmConfig;
- (id)algoCachePath;
- (BOOL)enableAlgorithmAsync;
- (void)setAlgoCachePath:;
- (void)setAlgorithmConfig:;
- (void)setEnableAlgorithmAsync:;
- (void).cxx_destruct;
@end
