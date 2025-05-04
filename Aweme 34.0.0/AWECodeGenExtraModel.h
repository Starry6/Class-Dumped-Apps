@interface AWECodeGenExtraModel : AWEBaseDataModel
@property (nonatomic) q now;
@property (nonatomic) NSString logid;
@property (nonatomic) NSArray fatalItemIdsArray;
@property (nonatomic) NSString searchRequestId;
@property (nonatomic) q startMs;
@property (nonatomic) NSString webid;
@property (nonatomic) NSString toidMd5;
- (id)logid;
- (void)setStartMs:;
- (void)setLogid:;
- (id)webid;
- (void)setWebid:;
- (id)toidMd5;
- (void)setToidMd5:;
- (long long)now;
- (void).cxx_destruct;
- (void)setNow:;
- (long long)startMs;
- (id)searchRequestId;
- (id)fatalItemIdsArray;
- (void)setFatalItemIdsArray:;
- (void)setSearchRequestId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
