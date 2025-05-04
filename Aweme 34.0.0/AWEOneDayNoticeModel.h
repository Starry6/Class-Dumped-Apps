@interface AWEOneDayNoticeModel : AWEBaseApiModel
@property (nonatomic) AWEOneDayLifeStoryModel lifeStoryModel;
@property (nonatomic) NSMutableArray fromUser;
@property (nonatomic) NSString content;
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) NSString descAndTime;
- (id)commentModel;
- (void)setCommentModel:;
- (id)lifeStoryModel;
- (id)mergeCount;
- (void)setFromUser:;
- (id)descAndTime;
- (void)setMergeCount:;
- (void)setDescAndTime:;
- (void)setLifeStoryModel:;
- (BOOL)isExpired;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)fromUser;
- (void)setIsExpired:;
+ (id)commentModelJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)lifeStoryModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
