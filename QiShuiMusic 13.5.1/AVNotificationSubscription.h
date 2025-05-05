@interface AVNotificationSubscription : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (id)initWithObject:notificationName:callbackBlock:;
- (id)description;
@end
