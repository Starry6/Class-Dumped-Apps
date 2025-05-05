@interface EDConversationDailyiCloudExporter : NSObject
@property (nonatomic) <EDConversationDailyCloudExporterDelegate> delegate;
@property (nonatomic) EDUbiquitousConversationManager conversationManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)run;
- (id)initWithDelegate:conversationManager:;
- (id)delegate;
- (void).cxx_destruct;
- (id)conversationManager;
+ (id)log;
@end
