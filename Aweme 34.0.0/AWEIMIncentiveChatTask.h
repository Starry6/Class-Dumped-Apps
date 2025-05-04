@interface AWEIMIncentiveChatTask : NSObject
@property (nonatomic) NSDictionary dictionaryRawData;
@property (nonatomic) q taskId;
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSString token;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSArray hasCompletedChatList;
- (void)setExtra:;
- (id)taskKey;
- (void)setTaskKey:;
- (id)dictionaryRawData;
- (id)hasCompletedChatList;
- (void)setHasCompletedChatList:;
- (void)setDictionaryRawData:;
- (BOOL)completed;
- (id)extra;
- (void).cxx_destruct;
- (void)setToken:;
- (void)setCompleted:;
- (id)token;
- (id)initWithDictionary:;
- (long long)taskId;
- (void)setTaskId:;
@end
