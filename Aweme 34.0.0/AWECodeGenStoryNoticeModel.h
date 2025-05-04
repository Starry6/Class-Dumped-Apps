@interface AWECodeGenStoryNoticeModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenLifeStoryModel storyModel;
@property (nonatomic) NSArray fromUserModelArray;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger mergeCount;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) AWECodeGenCommentModel commentModel;
- (id)commentModel;
- (void)setCommentModel:;
- (int)mergeCount;
- (id)fromUserModelArray;
- (void)setMergeCount:;
- (void)setFromUserModelArray:;
- (BOOL)isExpired;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setStoryModel:;
- (id)storyModel;
- (void)setIsExpired:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
