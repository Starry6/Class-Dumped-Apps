@interface AWEIMGroupJoinFunctionsPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSArray iconItems;
@property (nonatomic) double width;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemWidth;
@property (nonatomic) double spacing;
@property (nonatomic) UIColor cellColor;
@property (nonatomic) @? tapFunctionBlock;
@property (nonatomic) @? willDisplayModel;
- (void)setWillDisplayModel:;
- (id)willDisplayModel;
- (void)setIconItems:;
- (void)setTapFunctionBlock:;
- (id)iconItems;
- (id)tapFunctionBlock;
- (double)spacing;
- (void)setSpacing:;
- (void)setWidth:;
- (void)setItemWidth:;
- (double)itemWidth;
- (double)width;
- (void).cxx_destruct;
- (double)itemHeight;
- (id)cellColor;
- (void)setCellColor:;
- (void)setItemHeight:;
@end
