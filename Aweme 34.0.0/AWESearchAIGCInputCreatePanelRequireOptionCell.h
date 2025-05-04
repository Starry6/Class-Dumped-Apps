@interface AWESearchAIGCInputCreatePanelRequireOptionCell : UITableViewCell
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView sepView;
@property (nonatomic) @? selectCallback;
@property (nonatomic) AWESearchAIGCInputAgentActionCreateRequirementOpt optModel;
- (id)sepView;
- (void)setSepView:;
- (id)selectCallback;
- (void)setSelectCallback:;
- (id)optModel;
- (void)selectOptionAction:;
- (void)updateWithModel:selectCallback:isLast:;
- (void)setOptModel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)actionButton;
- (void)setActionButton:;
+ (double)viewHeightWithModel:;
+ (double)viewMinWidthWithModel:;
+ (id)identifier;
+ (id)nameLabelFont;
@end
