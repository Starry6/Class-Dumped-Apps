@interface AWEFansPushReverseAfterWeekResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray urgeList;
@property (nonatomic) q total;
- (id)urgeList;
- (void)setUrgeList:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)urgeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
