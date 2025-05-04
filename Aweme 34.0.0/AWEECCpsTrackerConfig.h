@interface AWEECCpsTrackerConfig : MTLModel
@property (nonatomic) NSArray reportParamsConfig;
@property (nonatomic) AWEECCpsTrackerRetryConfig retryConfig;
@property (nonatomic) NSArray blockList;
@property (nonatomic) NSString version;
@property (nonatomic) BOOL useNewApi;
@property (nonatomic) BOOL useOldApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reportParamsConfig;
- (void)setReportParamsConfig:;
- (id)retryConfig;
- (void)setRetryConfig:;
- (BOOL)useNewApi;
- (void)setUseNewApi:;
- (BOOL)useOldApi;
- (void)setUseOldApi:;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)blockList;
- (void)setBlockList:;
+ (id)reportParamsConfigJSONTransformer;
+ (id)retryConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
