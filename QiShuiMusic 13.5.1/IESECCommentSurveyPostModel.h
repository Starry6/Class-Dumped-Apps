@interface IESECCommentSurveyPostModel : MTLModel
@property (nonatomic) q surveyId;
@property (nonatomic) q surveyScene;
@property (nonatomic) NSString optionCode;
@property (nonatomic) NSString content;
@property (nonatomic) NSString subOptionCodeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSurveyScene:;
- (id)optionCode;
- (void)setOptionCode:;
- (void)setSubOptionCodeList:;
- (void)setSurveyId:;
- (id)subOptionCodeList;
- (long long)surveyId;
- (long long)surveyScene;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
