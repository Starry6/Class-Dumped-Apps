@interface BDUGLuckyFeRules : BDUGLuckyBDModel
@property (nonatomic) BDUGLuckyInjectRules injectRules;
@property (nonatomic) BDUGLuckyUrlReplaceRules urlReplaceRules;
- (void)setInjectRules:;
- (id)urlReplaceRules;
- (id)injectRules;
- (void)setUrlReplaceRules:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
