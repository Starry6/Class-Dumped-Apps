@interface AWEThroughQuestionnaireGeneralOuterSmartService : AWEThroughQuestionnaireGeneralSmartServiceBase
@property (nonatomic) <AWEThroughQuestionnaireGeneralSmartServiceOuterDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:action:;
- (BOOL)shouldIgnoreRunWithAction:params:;
- (BOOL)isInnerService;
- (void)onEnterOuterTab;
- (void)onLeaveOuterTab;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
