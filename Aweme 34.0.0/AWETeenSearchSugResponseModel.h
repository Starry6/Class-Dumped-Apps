@interface AWETeenSearchSugResponseModel : AWEBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) NSString msg;
@property (nonatomic) NSArray sugWordList;
- (void)setSugWordList:;
- (id)sugWordList;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (void)setMsg:;
- (id)msg;
+ (id)sugWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
