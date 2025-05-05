@interface PuzzleBackupBridge : NSObject
@property (nonatomic) <IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)closeContainer:keepOffline:animate:willClose:completion:;
- (id)piper;
- (void)registerClose;
- (void)registerHandlerWithBridge:;
- (void)setPiper:;
- (void).cxx_destruct;
@end
