@interface AWEChallengeDetailLiveWrapperSectionController : AWEBaseListSectionController
@property (nonatomic) double sectionHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)init;
- (Class)cellClass;
- (double)sectionHeight;
- (void)setSectionHeight:;
+ (Class)sectionViewModelClass;
@end
