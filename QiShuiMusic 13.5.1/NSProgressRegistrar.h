@interface NSProgressRegistrar : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)removePublisherForID:;
- (void)dealloc;
- (id)removeSubscriberForID:;
- (id)initWithQueue:rootFileAccessNode:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)observePublisherUserInfoForID:value:forKey:;
- (id)addSubscriber:forID:appBundleID:category:completionHandler:;
- (id)addSubscriber:forID:appBundleID:fileURL:completionHandler:;
- (void)_getRemoteProcessWithAuditToken:canReadItemAtURL:completionHandler:;
- (id)observePublisherForID:values:forKeys:;
- (id)addPublisher:forID:acknowledgementAppBundleIDs:category:fileURL:initialValues:completionHandler:;
@end
