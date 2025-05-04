@interface AWEProfileExtensionAreaCommonParamModel : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) Q cardStyle;
@property (nonatomic) Q cardIndex;
@property (nonatomic) Q shownCardsCount;
@property (nonatomic) Q currentPage;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) BOOL superVCDidIsAppearingWhenInitPassCardView;
- (id)cardModel;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (void)setCardModel:;
- (void)setCardIndex:;
- (unsigned long long)cardIndex;
- (unsigned long long)shownCardsCount;
- (BOOL)superVCDidIsAppearingWhenInitPassCardView;
- (void)setShownCardsCount:;
- (void)setSuperVCDidIsAppearingWhenInitPassCardView:;
- (unsigned long long)currentPage;
- (void)setUserModel:;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (id)userModel;
- (unsigned long long)cardStyle;
- (void)setCardStyle:;
@end
