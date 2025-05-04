@interface AWEFeedNegativeFeedbackFilterRuleManager : NSObject
@property (nonatomic) NSMutableArray cachedfilters;
@property (nonatomic) <AWEFeedNegativeFeedbackFilterDataProtocol> dataDelegate;
- (id)cachedfilters;
- (void)setCachedfilters:;
- (id)negativeFeedbackInfoDict;
- (BOOL)shouldBeFilteredWithModel:;
- (void)registerNegativeFiltersClass;
- (id)negativeFilterClassArray;
- (id)filterNegativeVideosWithAwemeList:;
- (id)init;
- (void)addFilter:;
- (void).cxx_destruct;
- (id)dataDelegate;
- (void)setDataDelegate:;
@end
