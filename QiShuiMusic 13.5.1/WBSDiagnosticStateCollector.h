@interface WBSDiagnosticStateCollector : NSObject
@property (nonatomic) NSString logLabel;
@property (nonatomic) BOOL registeredWithSysdiagnose;
- (void)dealloc;
- (id)initWithLogLabel:queue:payloadProvider:;
- (id)_createOSStateDataWithHints:;
- (id)logLabel;
- (id)initWithLogLabel:payloadProvider:;
- (void)setLogLabel:;
- (void)unregister;
- (void)registerWithSysdiagnose;
- (id)test_createOSStateDataWithHints:;
- (void).cxx_destruct;
- (BOOL)isRegisteredWithSysdiagnose;
+ (id)registeredStateCollectorWithLogLabel:payloadProvider:;
@end
