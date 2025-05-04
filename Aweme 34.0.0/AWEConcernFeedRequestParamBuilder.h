@interface AWEConcernFeedRequestParamBuilder : NSObject
@property (nonatomic) NSArray providers;
@property (nonatomic) double lastEnterTabTimeStamp;
- (id)paramsForPullType:;
- (id)forceInsertParamProvider;
- (id)throughPassParamProvider;
- (void)setupProviders;
- (double)lastEnterTabTimeStamp;
- (void)setLastEnterTabTimeStamp:;
- (id)providers;
- (id)init;
- (void)setProviders:;
- (void).cxx_destruct;
+ (void)p_insertDebugParamsInDictionary:;
+ (id)providerClass;
@end
