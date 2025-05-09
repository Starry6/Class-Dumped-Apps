@interface AWERecordInspirationCategoryItem : MTLModel
@property (nonatomic) AWERecordInspirationNetHelper netHelper;
@property (nonatomic) q cursor;
@property (nonatomic) q longCursor;
@property (nonatomic) q count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q scene;
@property (nonatomic) BOOL haveQueryRunning;
@property (nonatomic) @? detailBlock;
@property (nonatomic) q categoryId;
@property (nonatomic) NSString categoryName;
@property (nonatomic) Q categoryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)detailBlock;
- (void)setDetailBlock:;
- (void)setLongCursor:;
- (BOOL)currentIsAIGCTab;
- (BOOL)currentIsRecommendTab;
- (BOOL)currentIsLoraSuiteTab;
- (BOOL)currentIsCollectTab;
- (BOOL)currentIsTemplateTab;
- (long long)longCursor;
- (id)netHelper;
- (BOOL)haveQueryRunning;
- (void)setNetHelper:;
- (void)setHaveQueryRunning:;
- (BOOL)currentIsTestAIGCTab;
- (long long)cursor;
- (void)setScene:;
- (void)setCount:;
- (long long)scene;
- (void)setHasMore:;
- (long long)count;
- (BOOL)hasMore;
- (void)setCursor:;
- (unsigned long long)categoryType;
- (void).cxx_destruct;
- (void)setCategoryType:;
- (long long)categoryId;
- (id)categoryName;
- (void)setCategoryName:;
- (void)setCategoryId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
