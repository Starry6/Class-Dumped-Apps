@interface AVCSessionConfiguration : NSObject
@property (nonatomic) q sessionMode;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSObject<NSCopying> reportingHierarchyToken;
@property (nonatomic) BOOL oneToOneModeEnabled;
@property (nonatomic) NSObject<OS_nw_activity> parentNWActivity;
@property (nonatomic) NSUUID conversationID;
@property (nonatomic) NSDate conversationTimeBase;
@property (nonatomic) NSDate conversationTimeBaseTruncated;
- (id)dictionary;
- (void)dealloc;
- (void)setServiceName:;
- (id)serviceName;
- (id)conversationID;
- (void)setConversationID:;
- (BOOL)isOneToOneModeEnabled;
- (id)reportingHierarchyToken;
- (void)setReportingHierarchyToken:;
- (void)setOneToOneModeEnabled:;
- (long long)sessionMode;
- (void)cleanupNwActivity;
- (void)setSessionMode:;
- (void)setParentNWActivity:;
- (id)conversationTimeBase;
- (void)setConversationTimeBase:;
- (id)conversationTimeBaseTruncated;
- (void)setConversationTimeBaseTruncated:;
- (id)parentNWActivity;
- (void)setUpWithDictionary:;
- (id)serializeNwActivity:;
- (id)deserializeNwActivity:;
+ (long long)clientSessionModeWithSessionMode:;
+ (long long)sessionModeWithClientSessionMode:;
@end
