@interface AVMapPublisher : AVPublisher
- (void)dealloc;
- (id)subscribeRequestingInitialValue:block:;
- (id)initWithUpstream:transform:;
- (id)description;
+ (id)mapPublisherWithUpstream:transform:;
@end
