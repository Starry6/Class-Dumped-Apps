@interface IESPiperCoreABTestManager : NSObject
@property (nonatomic) BOOL useBridgeEngineV2;
@property (nonatomic) BOOL monitorJSBInvokeEvent;
@property (nonatomic) BOOL enableIFrameJSB;
@property (nonatomic) BOOL iesBridgeEngineIframeNewLogicEnabled;
@property (nonatomic) BOOL iesBridgeEngineCallbackMessageUUID;
@property (nonatomic) BOOL shouldLogScript;
@property (nonatomic) BOOL shouldApplyExecutionOptimization;
@property (nonatomic) BOOL shouldApplyMapRegister;
- (BOOL)shouldLogScript;
- (BOOL)iesBridgeEngineCallbackMessageUUID;
- (BOOL)iesBridgeEngineIframeNewLogicEnabled;
- (void)setEnableIFrameJSB:;
- (void)setIesBridgeEngineCallbackMessageUUID:;
- (void)setIesBridgeEngineIframeNewLogicEnabled:;
- (void)setMonitorJSBInvokeEvent:;
- (void)setShouldApplyExecutionOptimization:;
- (void)setShouldApplyMapRegister:;
- (void)setShouldLogScript:;
- (void)setUseBridgeEngineV2:;
- (BOOL)shouldApplyExecutionOptimization;
- (BOOL)shouldApplyMapRegister;
- (BOOL)shouldEnableIFrameJSB;
- (BOOL)shouldMonitorJSBInvokeEvent;
- (BOOL)shouldUseBridgeEngineV2;
- (id)init;
+ (id)sharedManager;
@end
