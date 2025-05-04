@interface AWEIMGroupJoinPanelItemConfirmButton : AWEIMGroupJoinPanelItemViewModel
@property (nonatomic) @? confirmBlock;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) BOOL blockTap;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (BOOL)blockTap;
- (void)setBlockTap:;
- (id)init;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:;
@end
