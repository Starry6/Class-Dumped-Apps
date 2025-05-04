@interface AWEHotSpotFastSwitchView : UIView
@property (nonatomic) UILabel despLabel;
@property (nonatomic) UIImageView nextImageView;
@property (nonatomic) BOOL isFoldState;
@property (nonatomic) @? switchNextHandleBlock;
- (void)configureUI;
- (void)foldFastSwitchView;
- (id)despLabel;
- (void)setDespLabel:;
- (void)setSwitchNextHandleBlock:;
- (void)nextViewTapped;
- (id)nextImageView;
- (id)switchNextHandleBlock;
- (BOOL)isFoldState;
- (void)setIsFoldState:;
- (void)setNextImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
