@interface VKAnalyticsQuickActionEvent : VKAnalyticsEvent
@property (nonatomic) q eventType;
@property (nonatomic) q quickActionsCount;
@property (nonatomic) NSString quickActionType;
@property (nonatomic) q textLength;
- (void)setTextLength:;
- (long long)eventType;
- (void)setEventType:;
- (id)eventKey;
- (long long)type;
- (id)coreAnalyticsDictionary;
- (long long)textLength;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQuickActionType:quickActionsCount:textLength:eventType:customIdentifier:;
- (long long)quickActionsCount;
- (void)setQuickActionsCount:;
- (id)quickActionType;
- (void)setQuickActionType:;
@end
