@interface AWEBarrageCoinModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString coinID;
@property (nonatomic) Q coinType;
- (id)coinID;
- (void)setCoinID:;
- (unsigned long long)coinType;
- (void)setCoinType:;
- (id)user;
- (void)setUser:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
