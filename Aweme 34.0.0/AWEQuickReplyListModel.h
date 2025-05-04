@interface AWEQuickReplyListModel : MTLModel
@property (nonatomic) NSArray replyModels;
@property (nonatomic) NSNumber maxCount;
@property (nonatomic) NSNumber maxWords;
@property (nonatomic) BOOL hasFunction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)replyModels;
- (void)setReplyModels:;
- (id)maxWords;
- (void)setMaxWords:;
- (void)setHasFunction:;
- (void)setMaxCount:;
- (id)maxCount;
- (void).cxx_destruct;
- (BOOL)hasFunction;
+ (id)replyModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
