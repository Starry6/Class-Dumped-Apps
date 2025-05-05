@interface IESVideoEffectWrapperModel : MTLModel
@property (nonatomic) IESEffectModel effect;
@property (nonatomic) IESSimpleVideoModel video;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEffect:;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)effect;
+ (id)effectJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
