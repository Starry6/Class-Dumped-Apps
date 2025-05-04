@interface AWEMemoriesThemeVideoSectionController : AWEBaseListSectionController
@property (nonatomic) AWEMemoriesThemeVideoCell cell;
@property (nonatomic) BOOL isActive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)playerWillStartNextLoop:;
- (void)playSection;
- (void)pauseSection;
- (id)init;
- (void)setIsActive:;
- (void)dealloc;
- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)cell;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)setCell:;
@end
