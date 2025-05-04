@interface AWEIMUnreadShareFeedManager : NSObject
@property (nonatomic) NSMutableDictionary recallInfoDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_onConversationDataSourceMessagesUpdated:belongingConversationMap:;
- (BOOL)didMessageRecalledWithMessageId:;
- (id)recallInfoDic;
- (void)markRecalledMessage:;
- (void)markInsertUnreadShareMessageWithMessageId:;
- (void)setRecallInfoDic:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
