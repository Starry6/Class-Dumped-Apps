@interface AWEProfileBaseContainerContext : NSObject
@property (nonatomic) NSArray tabItemsArray;
@property (nonatomic) NSArray sectionControllerClassArray;
@property (nonatomic) q landingIndex;
@property (nonatomic) @? changeTabItemBlock;
@property (nonatomic) @? exposeTabItemBlock;
@property (nonatomic) @? layoutVisibleItemsBlock;
@property (nonatomic) @? updateVisibleItemsBlock;
@property (nonatomic) @? bubbleDidAppearBlock;
- (id)sectionControllerClassArray;
- (void)setLandingIndex:;
- (long long)landingIndex;
- (void)setSectionControllerClassArray:;
- (id)tabItemsArray;
- (void)setTabItemsArray:;
- (id)changeTabItemBlock;
- (void)setChangeTabItemBlock:;
- (id)exposeTabItemBlock;
- (void)setExposeTabItemBlock:;
- (id)layoutVisibleItemsBlock;
- (void)setLayoutVisibleItemsBlock:;
- (id)updateVisibleItemsBlock;
- (void)setUpdateVisibleItemsBlock:;
- (id)bubbleDidAppearBlock;
- (void)setBubbleDidAppearBlock:;
- (void).cxx_destruct;
@end
