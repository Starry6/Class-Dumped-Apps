@interface UNNotification : NSObject
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) NSArray intentIdentifiers;
@property (nonatomic) NSDate date;
@property (nonatomic) UNNotificationRequest request;
- (id)speakableIdentifier;
- (id)speakableContent;
- (id)speakableDescription;
- (id)speakableDate;
- (id)sourceIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)request;
- (id)date;
- (id)intentIdentifiers;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithNotificationRequest:date:sourceIdentifier:intentIdentifiers:;
+ (BOOL)supportsSecureCoding;
+ (id)notificationWithRequest:date:sourceIdentifier:intentIdentifiers:;
+ (id)notificationWithRequest:date:;
@end
