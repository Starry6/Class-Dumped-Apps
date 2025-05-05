@interface IESECGoodsDetailDetailTableItemModel : IESECBaseApiModel
@property (nonatomic) IESECTextElement header;
@property (nonatomic) IESECTextWithIconElement mainElement;
@property (nonatomic) IESECTextWithIconElement qualificationPreElement;
@property (nonatomic) IESECTextElement qualificationTailElement;
@property (nonatomic) BOOL certificationNewDesign;
@property (nonatomic) NSDictionary authInfo;
- (void)setMainElement:;
- (BOOL)certificationNewDesign;
- (id)mainElement;
- (id)qualificationPreElement;
- (id)qualificationTailElement;
- (void)setCertificationNewDesign:;
- (void)setQualificationPreElement:;
- (void)setQualificationTailElement:;
- (void)setHeader:;
- (id)authInfo;
- (void)setAuthInfo:;
- (void).cxx_destruct;
- (id)header;
+ (id)JSONKeyPathsByPropertyKey;
@end
