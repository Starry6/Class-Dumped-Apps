@interface AWEThroughQuestionnaireGeneralSmartServiceConfig : NSObject
@property (nonatomic) NSDictionary serviceConfigDict;
@property (nonatomic) NSString referString;
@property (nonatomic) @? getOuterQuestionnaireBlock;
@property (nonatomic) @? getInnerQuestionnaireBlock;
- (id)referString;
- (void)setReferString:;
- (id)serviceConfigDict;
- (void)setServiceConfigDict:;
- (id)getOuterQuestionnaireBlock;
- (void)setGetOuterQuestionnaireBlock:;
- (id)getInnerQuestionnaireBlock;
- (void)setGetInnerQuestionnaireBlock:;
- (void).cxx_destruct;
@end
