@interface AWEFeedDislikeManager : NSObject
@property (nonatomic) NSMutableDictionary dislikeModelsDict;
- (void)addDislikeModelIfNeededWithReferString:model:;
- (id)searchQueryDislikeDictWithReferString:;
- (id)latestDislikeItemsStringWithReferString:;
- (void)setDislikeModelsDict:;
- (id)dislikeModelsDict;
- (id)dislikeModelsWithReferString:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
