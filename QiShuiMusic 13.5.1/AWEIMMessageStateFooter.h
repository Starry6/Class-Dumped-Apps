@interface AWEIMMessageStateFooter : UIView
@property (nonatomic) AWEIMMessageStateIndicator stateIndicator;
@property (nonatomic) YYLabel alreadyReadLabel;
- (void)__setupUI;
- (id)alreadyReadLabel;
- (void)changeIndicatorToState:progress:;
- (void)setAlreadyReadLabel:;
- (void)setStateIndicator:;
- (id)stateIndicator;
- (id)init;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateContent:;
@end
