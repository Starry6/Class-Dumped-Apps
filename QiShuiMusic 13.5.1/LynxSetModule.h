@interface LynxSetModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getAllSettings:callback:;
- (BOOL)getAutoResumeAnimation;
- (BOOL)getEnableLayoutOnly;
- (BOOL)getEnableNewTransformOrigin;
- (id)getLogToSystemStatus;
- (id)initWithLynxContext:;
- (void)setAutoResumeAnimation:;
- (void)setEnableNewTransformOrigin:;
- (void)switchAutomation:;
- (void)switchEnableLayoutOnly:;
- (void)switchKeyBoardDetect:;
- (void)switchLogToSystem:;
- (void).cxx_destruct;
- (BOOL)isAutomationEnabled;
+ (id)methodLookup;
+ (id)name;
@end
