@interface IESCategorySampleEffectModel : MTLModel
@property (nonatomic) NSString version;
@property (nonatomic) NSString categoryKey;
@property (nonatomic) IESEffectModel effect;
@property (nonatomic) IESEffectSampleVideoModel video;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCategoryKey:;
- (void)setVersion:;
- (id)version;
- (void)setEffect:;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)effect;
- (id)categoryKey;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
