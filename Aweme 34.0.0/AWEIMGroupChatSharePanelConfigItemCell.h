@interface AWEIMGroupChatSharePanelConfigItemCell : UICollectionViewCell
@property (nonatomic) AWEIMGroupChatSharePanelConfigItemViewModel model;
@property (nonatomic) <AWEIMGroupChatSharePanelConfigItemCellDelegate> delegate;
@property (nonatomic) UIImageView itemIconView;
@property (nonatomic) UILabel itemLabelLabel;
@property (nonatomic) UIView<IESIMSettingSwitchProtocol> itemSettingSwitch;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView bottomLineView;
- (id)bottomLineView;
- (void)renderModel:context:;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)itemIconView;
- (id)itemLabelLabel;
- (id)itemSettingSwitch;
- (void)__configGenericUserInterface;
- (id)delegate;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)arrowImageView;
@end
