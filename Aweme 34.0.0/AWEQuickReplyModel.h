@interface AWEQuickReplyModel : MTLModel
@property (nonatomic) NSString replyText;
@property (nonatomic) Q replyType;
@property (nonatomic) NSNumber replyID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReplyID:;
- (void).cxx_destruct;
- (id)replyID;
- (id)replyText;
- (void)setReplyText:;
- (unsigned long long)replyType;
- (void)setReplyType:;
+ (id)replyTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
