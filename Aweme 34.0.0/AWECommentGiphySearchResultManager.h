@interface AWECommentGiphySearchResultManager : NSObject
@property (nonatomic) AWECommentGiphySearchResultCollectionView giphyCollectionView;
@property (nonatomic) UILabel emptyHintLabel;
@property (nonatomic) NSMutableOrderedSet showedGiphyIDSet;
@property (nonatomic) NSString searchLogID;
@property (nonatomic) AWECommentGiphySearchResultWrapper searchData;
@property (nonatomic) NSString searchingKeyword;
@property (nonatomic) NSString delaySearchKey;
@property (nonatomic) NSDictionary logPb;
@property (nonatomic) @? performShowAnimationBlock;
@property (nonatomic) BOOL didSelectGIF;
@property (nonatomic) double WWANAdditionalDelayTime;
@property (nonatomic) AWETwoTuple lastEmojiShowContext;
@property (nonatomic) <AWECommentGiphySearchResultDelegate> delegate;
@property (nonatomic) @? showOrDisappearBlock;
@property (nonatomic) NSString groupID;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIView containerView;
@property (nonatomic) q searchType;
@property (nonatomic) NSDictionary extraInputDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)showOrDisappearBlock;
- (void)setShowOrDisappearBlock:;
- (id)extraInputDict;
- (void)setExtraInputDict:;
- (void)textFieldValueWillChangedToString:;
- (void)hideSearchResultView;
- (void)hideSearchResultView:;
- (BOOL)isAutoSearch;
- (long long)maxSearchLength;
- (void)configTheme:;
- (void)setLogPb:;
- (id)logPb;
- (void)delaySearchKeyword:;
- (id)delaySearchKey;
- (void)setDelaySearchKey:;
- (double)WWANAdditionalDelayTime;
- (void)setSearchData:;
- (id)giphyCollectionView;
- (id)emptyHintLabel;
- (void)searchGiphyWithKey:hasMore:offset:;
- (id)searchData;
- (id)searchingKeyword;
- (void)setSearchingKeyword:;
- (void)p_performHideAfterDelay;
- (id)searchLogID;
- (void)p_trackAutoLeaveAndRecord:;
- (void)setDidSelectGIF:;
- (void)setPerformShowAnimationBlock:;
- (id)performShowAnimationBlock;
- (void)setSearchLogID:;
- (BOOL)reloadSearchCollectionViewWithData:;
- (id)lastEmojiShowContext;
- (void)setLastEmojiShowContext:;
- (id)objectAtIndex:collectionView:;
- (id)commentAutoSearchParam:sticker:rank:;
- (id)extraTrackInputDict;
- (id)showedGiphyIDSet;
- (void)setGiphyCollectionView:;
- (void)setEmptyHintLabel:;
- (void)setShowedGiphyIDSet:;
- (BOOL)didSelectGIF;
- (void)setWWANAdditionalDelayTime:;
- (void)setGroupID:;
- (id)init;
- (long long)searchType;
- (void)dealloc;
- (id)delegate;
- (void)setSearchType:;
- (id)groupID;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)containerView;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContainerView:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)setDelegate:;
@end
