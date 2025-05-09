@interface TLKAuxilliaryTextView : TLKView
@property (nonatomic) TLKLabel topLabel;
@property (nonatomic) TLKLabel middleLabel;
@property (nonatomic) TLKLabel bottomLabel;
@property (nonatomic) TLKStackView contentView;
@property (nonatomic) BOOL useCompactMode;
@property (nonatomic) TLKFormattedText topText;
@property (nonatomic) TLKFormattedText middleText;
@property (nonatomic) TLKFormattedText bottomText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)topLabel;
- (void)setTopLabel:;
- (id)topText;
- (void)setTopText:;
- (id)middleText;
- (id)bottomText;
- (id)bottomLabel;
- (void)setBottomLabel:;
- (id)setupContentView;
- (void)setMiddleText:;
- (void)setBottomText:;
- (void)observedPropertiesChanged;
- (id)middleLabelFont;
- (id)bottomLabelFont;
- (id)topLabelString;
- (id)middleLabelString;
- (id)bottomLabelString;
- (id)middleLabel;
- (void)setMiddleLabel:;
- (BOOL)useCompactMode;
- (void)setUseCompactMode:;
@end
