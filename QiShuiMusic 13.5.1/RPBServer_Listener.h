@interface RPBServer_Listener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (id)initWithServer:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)remoteProcessingBlockServerWillStartRunning:;
- (void)remoteProcessingBlockServerDidStartRunning:;
- (void)remoteProcessingBlockServerWillStopRunning:;
- (void)remoteProcessingBlockServerDidStopRunning:;
@end
