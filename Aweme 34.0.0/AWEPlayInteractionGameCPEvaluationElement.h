@interface AWEPlayInteractionGameCPEvaluationElement : AWEPlayInteractionLeftElement
@property (nonatomic) BOOL cardAllreadyShown;
@property (nonatomic) <AWEGCPEvaluationCardManagerInterface> evaluationCardManagerInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)prepareForActivate;
- (BOOL)cardAllreadyShown;
- (id)evaluationCardManagerInterface;
- (void)createContainerIfNeedWithAwemeModel:;
- (void)setCardAllreadyShown:;
- (void)setEvaluationCardManagerInterface:;
- (void)viewDidLoad;
- (void)clear;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldHandleGameCPEvaluationElementModel:;
@end
