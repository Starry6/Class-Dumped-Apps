@interface AWEMemoriesAwemeVideoSectionController : AWEBaseListSectionController
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> player;
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
- (Class)cellClass;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
