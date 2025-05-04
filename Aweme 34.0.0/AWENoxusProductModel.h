@interface AWENoxusProductModel : AWEBaseApiModel
@property (nonatomic) NSString productID;
@property (nonatomic) NSString name;
@property (nonatomic) q price;
@property (nonatomic) q usableDurationTime;
@property (nonatomic) q appID;
@property (nonatomic) Q type;
- (long long)usableDurationTime;
- (void)setUsableDurationTime:;
- (long long)price;
- (void)setProductID:;
- (id)productID;
- (long long)appID;
- (unsigned long long)type;
- (void)setType:;
- (void)setAppID:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
