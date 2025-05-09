@interface AWEDCFeedBaseCellElement : NSObject
@property (nonatomic) AWEDCFeedSearchSuggestWordView searchSuggestWordView;
@property (nonatomic) AWEWordSourceModel currentWordSourceModel;
@property (nonatomic) @? closeCallBack;
@property (nonatomic) @? clickCallBack;
@property (nonatomic) @? showCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView elementView;
@property (nonatomic) double elementWidth;
@property (nonatomic) double elementHeight;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) AWEDCFeedBaseCell containerCell;
@property (nonatomic) BOOL hasAddedToContainer;
@property (nonatomic) BOOL screenWillRotate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configWithModel:context:;
- (id)containerCell;
- (void)themeDidChange:;
- (void)setContainerCell:;
- (void)configWithModel:context:cellWidth:;
- (void)setScreenWillRotate:;
- (BOOL)screenWillRotate;
- (void)updateElementLayoutWithCellWidth:height:context:;
- (void)setElementWidth:;
- (void)setElementHeight:;
- (BOOL)hasAddedToContainer;
- (void)setCurrentWordSourceModel:;
- (void)updateSearchSuggestWordView;
- (void)hideSuggestWordsView;
- (id)searchSuggestWordView;
- (id)currentWordSourceModel;
- (id)closeCallBack;
- (id)clickCallBack;
- (id)showCallBack;
- (void)addSuggestWordsView:;
- (void)removeSuggestWordsView;
- (void)showSuggestWordsView;
- (void)setClickCallBack:;
- (void)setCloseCallBack:;
- (void)setShowCallBack:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithContext:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (long long)wordCount;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)reset;
- (id)context;
- (double)elementHeight;
- (double)elementWidth;
- (void)setElementView:;
- (id)elementView;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (double)lastBottomMargin;
+ (long long)elementStyle;
+ (double)bottomMargin;
@end
