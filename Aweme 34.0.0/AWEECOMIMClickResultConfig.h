@interface AWEECOMIMClickResultConfig : NSObject
@property (nonatomic) AWEECOMIMChatListClickResultConfig chatListConfig;
@property (nonatomic) AWEECOMIMChatDetailClickResultConfig chatDetailConfig;
- (id)chatListConfig;
- (id)chatDetailConfig;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)sharedConfig;
@end
