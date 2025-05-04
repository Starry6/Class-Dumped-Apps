@interface AWEIMAudioMessagePlayConfig : NSObject
@property (nonatomic) NSArray playList;
@property (nonatomic) NSArray messageList;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString replyedID;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL isNearbyEarPlay;
@property (nonatomic) @? completion;
- (void)setPlayList:;
- (id)playList;
- (id)replyedID;
- (void)setReplyedID:;
- (BOOL)isNearbyEarPlay;
- (void)setIsNearbyEarPlay:;
- (id)filePath;
- (id)completion;
- (void)setCompletion:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)conversationId;
- (void)setConversationId:;
- (id)messageList;
- (void)setMessageList:;
+ (id)instanceWithPlayList:conversationId:;
+ (id)instanceWithMessageList:conversationId:;
@end
