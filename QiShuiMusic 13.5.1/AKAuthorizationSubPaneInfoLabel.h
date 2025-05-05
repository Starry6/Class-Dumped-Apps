@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) Q internalInfoLabelType;
@property (nonatomic) NSString string;
@property (nonatomic) double marginInset;
@property (nonatomic) Q infoLabelType;
- (id)string;
- (id)initWithString:;
- (void)setString:;
- (void).cxx_destruct;
- (void)setLabelColor:;
- (id)infoLabel;
- (void)addToStackView:context:;
- (void)addToConstraints:context:;
- (void)setString:animated:;
- (id)infoLabelWithString:;
- (void)setLabel:toInfoLabelType:;
- (unsigned long long)infoLabelType;
- (void)setInfoLabelType:;
- (double)marginInset;
- (void)setMarginInset:;
- (unsigned long long)internalInfoLabelType;
- (void)setInternalInfoLabelType:;
@end
