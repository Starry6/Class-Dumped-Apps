@interface IESECSKUTradeInCell : UIView
@property (nonatomic) <IESECSKUTradeInCellDelegate> delegate;
@property (nonatomic) IESECSKUTradeModel model;
@property (nonatomic) UILabel content;
@property (nonatomic) UILabel subContent;
@property (nonatomic) UIView topTagView;
@property (nonatomic) UILabel benefitLabel;
@property (nonatomic) UIView bgView;
- (id)benefitLabel;
- (void)clickItem;
- (void)setBenefitLabel:;
- (void)setSubContent:;
- (void)setTopTagView:;
- (id)subContent;
- (id)topTagView;
- (void)updateWithModel:atmosphereColor:;
- (id)model;
- (id)content;
- (void)setContent:;
- (void)setModel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
@end
