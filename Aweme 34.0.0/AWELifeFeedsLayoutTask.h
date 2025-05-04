@interface AWELifeFeedsLayoutTask : NSObject
@property (nonatomic) AWELifeFeedsPageView pageView;
@property (nonatomic) double sectionHeight;
@property (nonatomic) NSMutableArray layoutSectionList;
- (void)layoutBodyContainer:;
- (void)setUpNodePosition:superBlockNode:;
- (id)layoutSectionList;
- (void)setLayoutSectionList:;
- (void)layoutPageView:pageViewModel:;
- (void)addComponentNodeLayout:;
- (id)init;
- (id)pageView;
- (void).cxx_destruct;
- (void)setPageView:;
- (double)sectionHeight;
- (void)setSectionHeight:;
@end
