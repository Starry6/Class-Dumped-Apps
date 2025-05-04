@interface AWEProfileHeaderTopCornerBGView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) double maskHeight;
@property (nonatomic) AWEProfileHeaderColorfulView colorfulView;
- (void)p_setupUI;
- (id)aAWEPadModuleAdapter;
- (double)maskHeight;
- (void)refreshAlphaForHeaderView:;
- (void)p_addMaskWithHeight:;
- (void)setMaskHeight:;
- (id)colorfulView;
- (void)setColorfulView:;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)context;
- (void)updateWithContext:;
+ (Class)aAWEPadModuleAdapterClass;
@end
