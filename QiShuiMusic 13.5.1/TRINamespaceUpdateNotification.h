@interface TRINamespaceUpdateNotification : NSObject
@property (nonatomic) I namespaceId;
@property (nonatomic) NSString namespaceName;
@property (nonatomic) <TRINotificationToken> token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)namespaceName;
- (id)token;
- (unsigned int)namespaceId;
- (void).cxx_destruct;
- (id)initWithNamespaceName:token:;
+ (id)registerUpdateForNamespaceName:queue:usingBlock:;
+ (id)notificationNameForNamespaceName:;
+ (void)deregisterUpdateWithToken:;
+ (BOOL)notifyUpdateForNamespaceName:;
@end
