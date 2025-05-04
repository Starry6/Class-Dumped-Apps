@interface AWEPOIFeedUgcReplyGroupModel : MTLModel
@property (nonatomic) NSString replyCntNum;
@property (nonatomic) NSString replyListSchema;
@property (nonatomic) NSArray replyList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replyCntNum;
- (void)setReplyCntNum:;
- (id)replyList;
- (id)replyListSchema;
- (void)setReplyListSchema:;
- (void)setReplyList:;
- (void).cxx_destruct;
+ (id)replyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
