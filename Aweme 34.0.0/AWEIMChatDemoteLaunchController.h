@interface AWEIMChatDemoteLaunchController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldDemoteWithTimestamp:;
+ (void)updateAllDemoteInfoOnce;
+ (double)demoteTimestamp;
+ (void)updateDemoteTimestamp;
+ (id)demoteMsgTimeDict;
+ (id)demoteUnreadTimeDict;
+ (void)updateDemoteTimestampDict;
+ (BOOL)conformToDemoteUnreadCountStrategy;
+ (double)demteStrategyTodayTime;
+ (id)fansGroupConfigName;
+ (id)normalGroupConfigName;
+ (id)privateChatConfigName;
@end
