@interface AWEMVChannelSmallCardSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) q index;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setIndex:;
- (long long)index;
+ (id)referString;
@end
