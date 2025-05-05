@interface NSXPCStoreServer : NSObject
@property (nonatomic) <NSXPCStoreServerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replacementObjectForXPCConnection:encoder:object:;
- (void)dealloc;
- (void)startListening;
- (id)initForStoreWithURL:usingModel:options:policy:;
- (void)setDelegate:;
- (void)setErrorHandlingDelegate:;
- (id)errorHandlingDelegate;
- (id)handleRequest:reply:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)initForStoreWithURL:usingModelAtURL:options:policy:;
+ (unsigned long long)debugDefault;
@end
