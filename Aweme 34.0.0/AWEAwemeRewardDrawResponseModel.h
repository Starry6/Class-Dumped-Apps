@interface AWEAwemeRewardDrawResponseModel : AWEAwemeResponseModel
@property (nonatomic) NSArray taskList;
@property (nonatomic) NSDictionary taskInfoMap;
@property (nonatomic) q remainCount;
@property (nonatomic) BOOL ignoreLimit;
@property (nonatomic) NSDictionary schemaMap;
@property (nonatomic) BOOL isFallbackAd;
- (id)taskInfoMap;
- (void)setTaskInfoMap:;
- (long long)remainCount;
- (void)setRemainCount:;
- (BOOL)ignoreLimit;
- (void)setIgnoreLimit:;
- (id)schemaMap;
- (void)setSchemaMap:;
- (BOOL)isFallbackAd;
- (void)setIsFallbackAd:;
- (void).cxx_destruct;
- (void)setTaskList:;
- (id)taskList;
+ (id)JSONKeyPathsByPropertyKey;
@end
