@interface BDWebViewBlankDetectListener : BDHybridBaseMonitor
@property (nonatomic) NSString testString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDetectResult:isBlank:detectType:detectImage:error:costTime:;
- (void)reportDataBeforeLeave:;
- (void)setTestString:;
- (void).cxx_destruct;
- (id)testString;
+ (BOOL)startMonitorWithClasses:setting:;
+ (id)shareInstance;
@end
