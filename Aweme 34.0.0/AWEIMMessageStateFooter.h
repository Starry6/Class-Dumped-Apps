@interface AWEIMMessageStateFooter : UIView
@property (nonatomic) AWEIMMessageStateIndicator stateIndicator;
@property (nonatomic) YYLabel alreadyReadLabel;
- (void)__setupUI;
- (void)changeIndicatorToState:readReceipt:;
- (id)alreadyReadLabel;
- (id)stateIndicator;
- (void)changeIndicatorToState:progress:;
- (void)setStateIndicator:;
- (void)setAlreadyReadLabel:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContent:;
@end
