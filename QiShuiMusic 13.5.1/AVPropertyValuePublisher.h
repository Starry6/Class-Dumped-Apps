@interface AVPropertyValuePublisher : AVPublisher
- (void)dealloc;
- (id)subscribeRequestingInitialValue:block:;
- (id)initWithObject:key:notificationName:;
- (id)description;
+ (id)propertyValuePublisherWithObject:key:notificationName:;
@end
