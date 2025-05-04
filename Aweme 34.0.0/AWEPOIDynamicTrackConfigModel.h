@interface AWEPOIDynamicTrackConfigModel : NSObject
@property (nonatomic) BOOL shouldDisableDynamic;
@property (nonatomic) NSArray supportDynamicParamsNodesArray;
@property (nonatomic) NSDictionary paramsConfig;
- (void)setShouldDisableDynamic:;
- (void)setParamsConfig:;
- (void)setSupportDynamicParamsNodesArray:;
- (id)paramsConfig;
- (id)fetchConfigWithKey:;
- (BOOL)shouldDisableDynamic;
- (id)supportDynamicParamsNodesArray;
- (void).cxx_destruct;
+ (id)configInstanceWithDictionary:;
@end
