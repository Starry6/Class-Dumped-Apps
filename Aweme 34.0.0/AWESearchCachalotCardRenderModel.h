@interface AWESearchCachalotCardRenderModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString cardTypeName;
- (void)setCardTypeName:;
- (id)cardTypeName;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
@end
