@interface AWEKnowledgeRichFullPageService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (id)richAwemeBottomBarViewWithAwemeModel:inputViewClickBlock:;
- (id)createAnchorViewModelWithAwemeModel:referString:;
- (Class)headerDescriptionViewHelper;
- (id)createFullPageFeedListViewControllerPayload:;
- (BOOL)richAwemeHasRelatedRecommendWithEnterFrom:logExtra:;
- (id)createCorrelationItemTagWithModel:enterFrom:;
- (void)insertCorrelationItemTagIfNeededWithAttributedString:enterFrom:awemeModel:;
- (void)calibrateCorrelationAlbumItemWithItem:;
- (id)createRichAwemeVideoController:isSlidesContent:model:videoController:videoContext:;
- (id)fullPageLongPressManager;
- (id)getCoCreatorContainer;
- (id)createLifeEvaluationView;
- (id)createProductCommentView;
- (id)createProductLabelDescriptionView;
@end
