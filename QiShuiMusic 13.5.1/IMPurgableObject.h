@interface IMPurgableObject : NSObject
- (id)instance;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_receivedMemoryWarning:;
- (id)initWithSetupBlock:cleanupBlock:queue:;
- (void)_setupInstance;
- (void)_cleanupInstance;
@end
