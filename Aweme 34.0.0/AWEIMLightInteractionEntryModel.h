@interface AWEIMLightInteractionEntryModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString btn;
@property (nonatomic) NSString btnIconUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)btn;
- (void)setBtn:;
- (id)btnIconUrl;
- (void)setBtnIconUrl:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)copyWithZone:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
