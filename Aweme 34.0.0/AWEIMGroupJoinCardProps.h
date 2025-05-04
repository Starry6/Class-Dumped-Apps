@interface AWEIMGroupJoinCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMGroupJoinCardPresenterModel presenterModel;
@property (nonatomic) NSArray iconItems;
@property (nonatomic) @? tapFunctionBlock;
@property (nonatomic) @? willDisplayModel;
@property (nonatomic) @? closeTapBlock;
- (void)setWillDisplayModel:;
- (id)willDisplayModel;
- (void)setIconItems:;
- (void)setPresenterModel:;
- (void)setTapFunctionBlock:;
- (void)setCloseTapBlock:;
- (id)closeTapBlock;
- (id)presenterModel;
- (id)iconItems;
- (id)tapFunctionBlock;
- (void).cxx_destruct;
@end
