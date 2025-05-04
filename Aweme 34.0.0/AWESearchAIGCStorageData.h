@interface AWESearchAIGCStorageData : NSObject
@property (nonatomic) @ dataModel;
@property (nonatomic) @ renderModel;
@property (nonatomic) NSString conversationID;
@property (nonatomic) Q conversationRank;
@property (nonatomic) BOOL isQuestion;
@property (nonatomic) NSString searchID;
- (id)renderModel;
- (void)setRenderModel:;
- (unsigned long long)conversationRank;
- (void)setConversationRank:;
- (void)setIsQuestion:;
- (BOOL)isQuestion;
- (void)encodeWithCoder:;
- (id)conversationID;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setConversationID:;
- (id)dataModel;
- (void)setDataModel:;
- (id)searchID;
- (void)setSearchID:;
@end
