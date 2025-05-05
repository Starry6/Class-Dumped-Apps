@interface NSFileReactorProxy : NSObject
@property (nonatomic) I effectiveUserIdentifier;
- (void)dealloc;
- (void)collectDebuggingInformationWithCompletionHandler:;
- (void)forwardUsingProxy:;
- (id)_clientProxy;
- (id)client;
- (BOOL)allowedForURL:;
- (id)descriptionWithIndenting:;
- (id)description;
- (id)itemLocation;
- (void)invalidate;
- (void)setItemLocation:;
- (unsigned int)effectiveUserIdentifier;
- (id)reactorID;
- (id)initWithClient:reactorID:;
- (void)setEffectiveUserIdentifier:;
+ (void)_enumerateParentDirectoriesStartingAtURL:usingBlock:;
@end
