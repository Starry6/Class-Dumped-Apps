@interface AWEChapterPanelTipView : UIView
@property (nonatomic) NSString tipText;
@property (nonatomic) NSString tailText;
@property (nonatomic) NSString iconName;
@property (nonatomic) @? tapAction;
- (id)tipText;
- (void)setTipText:;
- (void)configUI;
- (id)tailText;
- (void)setTailText:;
- (id)initWithTipText:tailText:iconName:;
- (id)iconName;
- (void).cxx_destruct;
- (void)setIconName:;
- (id)tapAction;
- (void)setTapAction:;
@end
