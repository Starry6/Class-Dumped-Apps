@interface IESEffectVideoInfoDesignerWrapperModel : MTLModel
@property (nonatomic) IESEffectModel effect;
@property (nonatomic) NSArray videoInfos;
@property (nonatomic) NSString designerName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)designerName;
- (id)videoInfos;
- (void).cxx_destruct;
- (id)effect;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
