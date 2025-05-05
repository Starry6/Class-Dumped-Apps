@interface SFShareSheetCompletedEvent : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString activityType;
@property (nonatomic) Q presentationMs;
@property (nonatomic) Q totalShareTimeMs;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) BOOL success;
@property (nonatomic) NSDictionary eventPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSessionID:;
- (id)activityType;
- (void)setActivityType:;
- (id)sessionID;
- (id)eventPayload;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)isCollaborative;
- (void)setIsCollaborative:;
- (void)submitEvent;
- (unsigned long long)presentationMs;
- (void)setPresentationMs:;
- (unsigned long long)totalShareTimeMs;
- (void)setTotalShareTimeMs:;
+ (id)eventName;
@end
