@interface IESECCommentSurveyOption : MTLModel
@property (nonatomic) NSString optionCode;
@property (nonatomic) NSString optionDesc;
@property (nonatomic) IESECCommentSurveySubOptionConfig subOptionConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subOptionConfig;
- (id)optionCode;
- (id)optionDesc;
- (void)setOptionCode:;
- (void)setOptionDesc:;
- (void)setSubOptionConfig:;
- (void).cxx_destruct;
+ (id)subOptionConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
