@interface AWECommentRiskConfigModel : AWEBaseApiModel
@property (nonatomic) Q commentRiskDisplayType;
@property (nonatomic) NSString commentRiskText;
@property (nonatomic) Q commentRiskColorType;
@property (nonatomic) NSString commentRiskIconLight;
@property (nonatomic) NSString commentRiskIconDark;
@property (nonatomic) NSString commentRiskUrl;
@property (nonatomic) q commentRiskSceneId;
- (long long)commentRiskSceneId;
- (id)commentRiskUrl;
- (id)commentRiskIconLight;
- (id)commentRiskIconDark;
- (unsigned long long)commentRiskDisplayType;
- (unsigned long long)commentRiskColorType;
- (id)commentRiskText;
- (void)setCommentRiskDisplayType:;
- (void)setCommentRiskText:;
- (void)setCommentRiskColorType:;
- (void)setCommentRiskIconLight:;
- (void)setCommentRiskIconDark:;
- (void)setCommentRiskUrl:;
- (void)setCommentRiskSceneId:;
- (void).cxx_destruct;
+ (id)commentRiskDisplayTypeJSONTransformer;
+ (id)commentRiskColorTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
