@interface PLXPCPhotoLibraryStoreContainer : NSObject
@property (nonatomic) NSXPCStoreServer server;
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
- (id)server;
- (id)initWithServer:listener:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
+ (id)newContainerWithPathManager:connectionAuthorization:;
@end
