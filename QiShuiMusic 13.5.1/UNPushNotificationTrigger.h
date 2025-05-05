@interface UNPushNotificationTrigger : UNNotificationTrigger
@property (nonatomic) BOOL isContentAvailable;
@property (nonatomic) BOOL isMutableContent;
- (id)initWithCoder:;
- (id)_initWithContentAvailable:mutableContent:;
- (unsigned long long)hash;
- (BOOL)isMutableContent;
- (BOOL)isContentAvailable;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:mutableContent:;
@end
