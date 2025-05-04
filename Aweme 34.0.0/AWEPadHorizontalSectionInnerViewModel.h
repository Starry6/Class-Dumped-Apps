@interface AWEPadHorizontalSectionInnerViewModel : AWEPadBaseSectionViewModel
@property (nonatomic) AWEPadHorizontalSectionViewModel containerSectionViewModel;
@property (nonatomic) AWEPadHorizontalSectionController containerSectionController;
- (BOOL)enableGrid;
- (void)setContainerSectionController:;
- (void)setContainerSectionViewModel:;
- (Class)sectionControllerClaz;
- (id)containerSectionController;
- (id)containerSectionViewModel;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
