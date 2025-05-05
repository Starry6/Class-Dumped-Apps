@interface IESLiveVSGiftSectionChargeCell : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView labelContainer;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) <IESLiveVSGiftSectionItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_updateContent;
- (void)p_tapAction;
- (id)item;
- (id)contentView;
- (void)updateWithItem:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)labelContainer;
- (void)setLabelContainer:;
@end
