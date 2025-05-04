@interface AWEPadPolymericChannelSlidableSectionController : AWEPadHorizontalSectionController
@property (nonatomic) AWEPadPolymericChannelSlidableSectionViewModel viewModel;
@property (nonatomic) BOOL hasTrackSlide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)cellContentSizeWithCollectionViewSize:;
- (id)scrollViewContentInset;
- (BOOL)hasTrackSlide;
- (void)setHasTrackSlide:;
- (void)scrollViewDidScroll:;
+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;
@end
