@interface NSFileProviderService : NSObject
@property (nonatomic) NSString name;
- (void)dealloc;
- (id)name;
- (id)initWithName:endpointCreatingProxy:requestFinishedGroup:;
- (void)getFileProviderConnectionWithCompletionHandler:;
- (id)fetchFileProviderConnectionAndReturnError:;
@end
