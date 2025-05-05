@interface TRIPersistedNamespaceStatus : TRIPBMessage
@property (nonatomic) NSString namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) I namespaceCompatibilityVersion;
@property (nonatomic) BOOL hasNamespaceCompatibilityVersion;
@property (nonatomic) TRIPBTimestamp latestNotificationQueryLocalTime;
@property (nonatomic) BOOL hasLatestNotificationQueryLocalTime;
@property (nonatomic) BOOL lastFetchWasSuccess;
@property (nonatomic) BOOL hasLastFetchWasSuccess;
+ (id)descriptor;
@end
