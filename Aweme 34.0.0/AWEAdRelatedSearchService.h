@interface AWEAdRelatedSearchService : HTSService
@property (nonatomic) q AWEAdRelatedSearchState;
@property (nonatomic) BOOL hasRequestAfterSee;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)AWEAdRelatedSearchState;
- (void)setAWEAdRelatedSearchState:;
- (BOOL)hasRequestAfterSee;
- (void)setHasRequestAfterSee:;
- (void)fetchRelatedSearchWithModelAfterSee:;
- (void)fetchRelatedSearchWithModel:;
- (void)fetchRelatedSearchWithModel:WithBlock:;
- (id)getCommentSearchWordSource:;
- (id)getSuggestWordsFromRawAdData:;
- (void)resetRelatedSearchType;
- (BOOL)isSoftAdWithAweme:;
- (BOOL)pushAfterSeeWithoutAnimWithModel:;
- (void)fetchRelatedSearchWithModelByEvent:;
- (void)showBottomBarWithExistWordModel:withAweme:withType:;
- (id)configRequestParamsWithModel:;
- (BOOL)isValidCommentResponse:withAwemeModel:;
- (BOOL)needRequest:;
- (void)showBottomBarWithAsynRequest:withAweme:withBusinessID:withType:;
- (void)refreshCommentHeader:withAwemeModel:WithBlock:;
- (id)anchorExtraTitleWithAweme:;
- (id)anchorLogExtraAnchorTitleWithAweme:;
- (id)init;
- (void)dealloc;
@end
