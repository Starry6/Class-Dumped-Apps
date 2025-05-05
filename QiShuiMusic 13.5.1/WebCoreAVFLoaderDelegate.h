@interface WebCoreAVFLoaderDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (id)initWithPlayer:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)resourceLoader:didCancelLoadingRequest:;
- (BOOL)resourceLoader:shouldWaitForResponseToAuthenticationChallenge:;
@end
