@interface AWEECOMIMUrgeDeliveryCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) AWEECOMIMTextComponentModel textComponentModel;
@property (nonatomic) {CGSize=dd} textComponentSize;
@property (nonatomic) NSArray buttons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textContentSize;
- (void)updateModelWithData:encrypted:;
- (void)setTextComponentModel:;
- (void)excuteClickButtonAction:;
- (void)setTextComponentSize:;
- (id)textComponentModel;
- (void)sendButtonMessageWithButtonModel:;
- (id)textComponentSize;
- (void)setButtons:;
- (id)buttons;
- (void).cxx_destruct;
+ (Class)cardViewClass;
@end
