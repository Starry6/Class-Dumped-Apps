@interface AWEProfileEditChoiceView : UIView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) DUXRadioboxGroup boxGroup;
- (void)setBoxGroup:;
- (id)boxGroup;
- (void)p_chooseMode:;
- (id)initWithInitialIndex:dataArray:selectBlock:;
- (void)enableChoose;
- (void)disableChoose;
- (id)intrinsicContentSize;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)dataArray;
- (void)setupView;
- (void)setDataArray:;
@end
