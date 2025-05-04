@interface AWEIMShareDataModel : IESIMBaseApiModel
@property (nonatomic) NSString token;
@property (nonatomic) double expireTime;
@property (nonatomic) NSArray shareData;
@property (nonatomic) q lastItemID;
- (void)setLastItemID:;
- (long long)lastItemID;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)initWithDictionary:;
- (double)expireTime;
- (void)setExpireTime:;
- (id)shareData;
- (void)setShareData:;
+ (id)shareDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
