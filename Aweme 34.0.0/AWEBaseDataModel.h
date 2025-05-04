@interface AWEBaseDataModel : AWERootModel
@property (nonatomic) NSString requestID;
@property (nonatomic) NSDictionary logPassback;
- (id)logPassback;
- (void)setLogPassback:;
- (void)customMergeRequest:logPassback:;
- (id)sharedModelInfos;
- (id)requestID;
- (void)setRequestID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
