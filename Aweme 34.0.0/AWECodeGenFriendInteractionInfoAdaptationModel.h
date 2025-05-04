@interface AWECodeGenFriendInteractionInfoAdaptationModel : AWEBaseDataModel
@property (nonatomic) NSArray diggListModelArray;
@property (nonatomic) NSArray commentListModelArray;
@property (nonatomic) BOOL commentHasMore;
@property (nonatomic) BOOL commentCursor;
@property (nonatomic) q interactionPanelType;
@property (nonatomic) NSArray diggPreloadUidArray;
- (id)diggPreloadUidArray;
- (id)commentListModelArray;
- (BOOL)commentCursor;
- (id)diggListModelArray;
- (long long)interactionPanelType;
- (BOOL)commentHasMore;
- (void)setCommentHasMore:;
- (void)setCommentListModelArray:;
- (void)setDiggListModelArray:;
- (void)setCommentCursor:;
- (void)setInteractionPanelType:;
- (void)setDiggPreloadUidArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
