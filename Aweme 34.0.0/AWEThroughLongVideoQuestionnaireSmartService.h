@interface AWEThroughLongVideoQuestionnaireSmartService : NSObject
@property (nonatomic) AWEThroughQuestionnaireSmartServiceCore serviceCore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configMap;
- (void)onTriggerEvent:params:;
- (void)onEnterInnerWithParams:;
- (void)onLeaveInnerWithParams:;
- (id)serviceCore;
- (void)setServiceCore:;
- (id)logTag;
- (id)buildCommonEventMap;
- (id)pageReferStringSet;
- (id)saveShownTasksKey;
- (id)getQuestionnaireResponse;
- (void)onSmartQuestionnaireResult:action:;
- (id)innerInActionName;
- (id)innerExitActionName;
- (BOOL)shouldIgnoreRunWithAction:params:;
- (void)setupLongVideoTabChangeObserver;
- (id)sceneName;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)getConfigMap;
+ (id)sharedInstance;
@end
