@interface UNNotificationServiceExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)beginRequestWithExtensionContext:;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceiveNotificationRequest:withContentHandler:;
@end
