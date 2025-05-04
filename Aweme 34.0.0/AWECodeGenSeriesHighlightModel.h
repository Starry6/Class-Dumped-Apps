@interface AWECodeGenSeriesHighlightModel : AWEBaseDataModel
@property (nonatomic) NSString parentItemId;
@property (nonatomic) q parentItemCreateTime;
@property (nonatomic) q startTimeMsec;
@property (nonatomic) NSString authToken;
- (long long)startTimeMsec;
- (void)setStartTimeMsec:;
- (long long)parentItemCreateTime;
- (void)setParentItemCreateTime:;
- (id)parentItemId;
- (void)setParentItemId:;
- (void)setAuthToken:;
- (id)authToken;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
