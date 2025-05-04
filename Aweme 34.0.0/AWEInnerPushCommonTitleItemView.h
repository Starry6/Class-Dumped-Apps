@interface AWEInnerPushCommonTitleItemView : UIView
@property (nonatomic) UILabel textLabel;
- (double)fontSizeForBigFont:;
- (void)updateCompressionResistanceWithType:;
- (void)updateAttributedTextWithModel:type:;
- (void)updateRegularTextWithModel:font:color:;
- (void)updateIconAttrStringWithModel:;
- (id)rebuildAttributeStringForBigFont:font:;
- (id)iconAttrStringWithImage:model:;
- (void)updateWithModel:type:;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
