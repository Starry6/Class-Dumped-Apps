@interface MKAttributionLabel : UIView
@property (nonatomic) Q mapType;
@property (nonatomic) q displayStyle;
- (void)sizeToFit;
- (void)setMapType:;
- (unsigned long long)mapType;
- (void)drawRect:;
- (long long)displayStyle;
- (void)setDisplayStyle:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)_attributesWithStroke:;
- (void)_prepareLabel;
- (id)_labelTitle;
- (void)_updateTextColor;
@end
