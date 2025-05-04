@interface AWEExtraModelV2 : AWEBaseDataModel
@property (nonatomic) q now;
@property (nonatomic) NSString logid;
@property (nonatomic) NSArray fatalItemIdsArray;
@property (nonatomic) NSString searchRequestId;
- (id)logid;
- (void)setLogid:;
- (long long)now;
- (void).cxx_destruct;
- (void)setNow:;
- (id)searchRequestId;
- (id)fatalItemIdsArray;
- (void)setFatalItemIdsArray:;
- (void)setSearchRequestId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
