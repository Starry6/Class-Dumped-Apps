@interface UNTextInputNotificationResponse : UNNotificationResponse
@property (nonatomic) NSString userText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)userText;
- (id)_initWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:targetSceneIdentifier:;
- (id)_initWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:targetSceneIdentifier:userText:;
- (id)initWithNotification:actionIdentifier:userText:;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:targetSceneIdentifier:userText:;
+ (id)responseWithNotification:actionIdentifier:userText:;
+ (id)responseWithNotification:actionIdentifier:originIdentifier:targetConnectionEndpoint:userText:;
@end
