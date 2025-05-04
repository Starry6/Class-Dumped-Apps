@interface AWEMateListEmptySectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) BOOL isSearching;
@property (nonatomic) BOOL hasRecommendSection;
@property (nonatomic) q emptyStyle;
@property (nonatomic) q cardGuideType;
@property (nonatomic) BOOL isTipCardShowing;
- (long long)emptyStyle;
- (void)setEmptyStyle:;
- (void)setCardGuideType:;
- (BOOL)isTipCardShowing;
- (void)updateTipCardShowing:;
- (long long)cardGuideType;
- (BOOL)hasRecommendSection;
- (void)setHasRecommendSection:;
- (void)updateEmptyStyle;
- (void)setIsTipCardShowing:;
- (id)subtitle;
- (BOOL)isSearching;
- (id)title;
- (void)setIsSearching:;
@end
