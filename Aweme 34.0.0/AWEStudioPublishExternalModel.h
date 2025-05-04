@interface AWEStudioPublishExternalModel : NSObject
@property (nonatomic) NSString liveSourceParam;
@property (nonatomic) NSMutableArray shareConversations;
@property (nonatomic) NSMutableArray shareUserIdList;
- (id)shareConversations;
- (id)liveSourceParam;
- (id)shareUserIdList;
- (void)setLiveSourceParam:;
- (void)setShareConversations:;
- (void)setShareUserIdList:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
