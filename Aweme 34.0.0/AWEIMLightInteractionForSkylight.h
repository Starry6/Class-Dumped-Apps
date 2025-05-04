@interface AWEIMLightInteractionForSkylight : MTLModel
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString btnIconUrl;
@property (nonatomic) NSString btnIconUrlDark;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btnIconUrl;
- (void)setBtnIconUrl:;
- (void)setBtnIconUrlDark:;
- (id)btnIconUrlDark;
- (id)schema;
- (void)setSchema:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setButtonText:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
