@interface AWEFeedTagsPriorityManager : NSObject
@property (nonatomic) <AWEFeedTagsPosPriorityAvoidElementProtocol> currentShownElement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentShowElement;
- (BOOL)canUpdateTagsWithBusinessID:;
- (void)tagsPositionElementFilter:awemeModel:;
- (void)setCurrentShownElement:;
- (id)currentShownElement;
- (BOOL)priorityCompare:requestPriority:;
- (BOOL)tryReplaceCurrentShownElement:;
- (BOOL)tryUpdateTagsWithBusinessID:requestElement:;
- (BOOL)tryReplaceCurrentShownElementForTagElement:businessStr:didAppear:;
- (void)forceReplaceCurrentShownElement:;
- (void).cxx_destruct;
- (void)reset;
+ (long long)getInsertPriorityWithBusinessStr:;
+ (id)insertPriorityDict;
+ (long long)getPriorityWithBusinessStr:;
+ (id)staticPriorityDict;
+ (id)priorityDictForOriginLabels;
@end
