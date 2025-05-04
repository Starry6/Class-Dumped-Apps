@interface AWEEntertainmentPlayletVIPConfigModel : AWEBaseApiModel
@property (nonatomic) Q vipType;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) q productID;
@property (nonatomic) NSString buySchema;
@property (nonatomic) NSString librarySchema;
- (id)buySchema;
- (void)setBuySchema:;
- (void)setVipType:;
- (unsigned long long)vipType;
- (BOOL)hasPaid;
- (void)setHasPaid:;
- (id)librarySchema;
- (void)setLibrarySchema:;
- (void)setProductID:;
- (long long)productID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
