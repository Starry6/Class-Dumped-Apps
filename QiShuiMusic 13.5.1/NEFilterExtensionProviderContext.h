@interface NEFilterExtensionProviderContext : NEExtensionProviderContext
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)queue;
- (void)setConfiguration:extensionIdentifier:;
- (void)stopWithReason:;
- (void)startFilterWithOptions:completionHandler:;
@end
