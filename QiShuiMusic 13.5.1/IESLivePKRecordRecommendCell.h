@interface IESLivePKRecordRecommendCell : UIView
@property (nonatomic) UIView bottomLine;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? actionBlock;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showBottomLine;
- (void)setShowBottomLine:;
- (BOOL)showBottomLine;
- (BOOL)selected;
- (id)textLabel;
- (id)init;
- (id)actionBlock;
- (void)setSelected:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setActionBlock:;
- (void)setupViews;
- (id)bottomLine;
- (void)setBottomLine:;
- (void)tapAction;
@end
