@interface UNNotificationResponse : NSObject
@property (nonatomic) UIScene targetScene;
@property (nonatomic) NSString originIdentifier;
@property (nonatomic) BSServiceConnectionEndpoint targetConnectionEndpoint;
@property (nonatomic) NSString targetSceneIdentifier;
@property (nonatomic) UNNotification notification;
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetScene;
- (void)encodeWithXPCDictionary:;
- (id)notification;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)targetConnectionEndpoint;
- (id)originIdentifier;
- (id)targetSceneIdentifier;
- (id)_initWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:targetSceneIdentifier:;
- (id)initWithNotification:actionIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:targetSceneIdentifier:;
+ (id)responseWithNotification:actionIdentifier:;
+ (id)responseWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:;
@end
