@interface AWEIMDanmakuFilterController : NSObject
@property (nonatomic) <AWEIMDanmakuFilterControllerDelegate> delegate;
@property (nonatomic) NSArray groupModels;
@property (nonatomic) NSArray dataControllers;
@property (nonatomic) AWEGroupFilterView filterView;
@property (nonatomic) @? toggleMenuBlock;
- (id)groupModels;
- (void)setGroupModels:;
- (id)dataControllers;
- (void)setDataControllers:;
- (id)toggleMenuBlock;
- (void)setToggleMenuBlock:;
- (void)updateFilterUserInteractionEnabled:;
- (unsigned long long)currentSelectIdx;
- (void)setupGroupsWithMaxWidth:selectBlock:;
- (unsigned long long)currentGroupFilterType;
- (id)filterView;
- (id)init;
- (id)delegate;
- (void)setFilterView:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (unsigned long long)indexForGroupFilterModelType:;
+ (void)trackDidSelectIndex:;
@end
