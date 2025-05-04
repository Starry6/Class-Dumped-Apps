@interface AWEProfileUrgeControlModel : AWEBaseApiModel
@property (nonatomic) NSString nextUrgeType;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString buttonBackgroundURL;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString showTippingPanel;
@property (nonatomic) NSString tippingPanelText;
@property (nonatomic) NSString hasSendGift;
- (id)nextUrgeType;
- (void)setNextUrgeType:;
- (id)buttonBackgroundURL;
- (void)setButtonBackgroundURL:;
- (id)showTippingPanel;
- (void)setShowTippingPanel:;
- (id)tippingPanelText;
- (void)setTippingPanelText:;
- (id)hasSendGift;
- (void)setHasSendGift:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (void)setToast:;
- (id)toast;
- (id)initWithJsonDictionary:;
@end
