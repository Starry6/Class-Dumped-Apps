@interface NSFileProviderXPCMessenger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_makeProvider:provideItemAtURL:withInfo:completionHandler:;
- (void)collectDebuggingInformationWithCompletionHandler:;
- (void)providePhysicalItemForURL:completionHandler:;
- (void)checkInProviderWithReply:;
- (id)initWithFileProviderProxy:;
- (id)observeEndOfWriteAtURL:forClaimWithID:fromProcessWithIdentifier:;
- (void)provideItemAtURL:withInfo:completionHandler:;
- (id)observePresentationChangeOfKind:forPresenterOfURL:withInfo:;
- (void)movingItemAtURL:requiresProvidingWithDestinationURL:completionHandler:;
- (id)cancelProvidingItemAtURL:forClaimWithID:;
- (id)initWithFileProvider:queue:;
- (void)invalidate;
@end
