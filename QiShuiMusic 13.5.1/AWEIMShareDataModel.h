@interface AWEIMShareDataModel : IESIMBaseApiModel
@property (nonatomic) NSString token;
@property (nonatomic) double expireTime;
@property (nonatomic) NSArray shareData;
@property (nonatomic) q lastItemID;
- (long long)lastItemID;
- (void)setLastItemID:;
- (id)token;
- (id)initWithDictionary:;
- (void)setToken:;
- (void).cxx_destruct;
- (double)expireTime;
- (void)setExpireTime:;
- (id)shareData;
- (void)setShareData:;
+ (id)shareDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
