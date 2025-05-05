@interface QueryFilterEngine : NSObject
@property (nonatomic) NSMutableArray filterActions;
@property (nonatomic) BOOL queryFilterEnabled;
- (id)filterActions;
- (id)filterQuery:;
- (void)parseQueryFilterConfig:;
- (void)parseTNCQueryFilterConfig:;
- (BOOL)queryFilterEnabled;
- (void)setFilterActions:;
- (void)setLocalCommonParamsConfig:;
- (void)setQueryFilterEnabled:;
- (id)init;
- (void).cxx_destruct;
+ (id)filterQueryStringWithL0Params:;
+ (int)getEncryptTypeFromQueryEncrypt:bodyEncrypt:;
+ (void)handleQueryBodyEncryptIfNeed:queryMap:withFilterResult:;
+ (id)queryStringFromPairArray:;
+ (id)shareInstance;
@end
