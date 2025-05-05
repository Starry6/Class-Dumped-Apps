@interface IESSaaSTIMConversationChecker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkInfoConversations:;
- (void)checkInfoConversations:fullCheck:;
- (void)checkLocalConversationsWithCheckInfoList:page:logId:startTime:maxMessageServerCreateTime:inbox:;
- (void)fetchAllFetchFailedConversations:;
- (void)realNewCheckInfoConversations:;
- (void)realNewCheckInfoConversations:version:page:fullCheck:;
- (void)realOldCheckInfoConversations:;
+ (id)sharedInstance;
@end
