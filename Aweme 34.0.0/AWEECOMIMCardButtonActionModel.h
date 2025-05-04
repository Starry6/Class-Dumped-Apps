@interface AWEECOMIMCardButtonActionModel : AWEECOMIMButtonAction
@property (nonatomic) Q buttonType;
@property (nonatomic) @? actionBlock;
@property (nonatomic) AWEECOMIMBaseCardModel cardModel;
@property (nonatomic) @ handler;
- (id)cardModel;
- (void)setCardModel:;
- (id)goodCardSkipUrlString;
- (unsigned long long)buttonType;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)setButtonType:;
- (void)setActionBlock:;
- (id)actionBlock;
@end
