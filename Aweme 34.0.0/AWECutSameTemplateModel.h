@interface AWECutSameTemplateModel : MTLModel
@property (nonatomic) NSArray fragments;
@property (nonatomic) NSString alignMode;
@property (nonatomic) NSString cutsameVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlignMode:;
- (id)alignMode;
- (id)cutsameVersion;
- (void)setCutsameVersion:;
- (void).cxx_destruct;
- (id)fragments;
- (void)setFragments:;
+ (id)fragmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
