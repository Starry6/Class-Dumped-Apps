@interface AWEUserWorkAwemeSectionController : AWEBaseListSectionController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)aAWEPadUserPageAdapter;
- (id)init;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
+ (Class)sectionViewModelClass;
+ (Class)aAWEPadUserPageAdapterClass;
@end
