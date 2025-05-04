@interface AWEThroughQuestionnaireGeneralInnerSmartService : AWEThroughQuestionnaireGeneralSmartServiceBase
@property (nonatomic) <AWEThroughQuestionnaireGeneralSmartServiceInnerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onEnterInnerWithParams:;
- (void)onLeaveInnerWithParams:;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:action:;
- (BOOL)shouldIgnoreInnerQuestionnaireShowWithModelID:;
- (BOOL)isInnerService;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
