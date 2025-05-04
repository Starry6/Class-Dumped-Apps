@interface AWEIMSimilarEmoticonLayerView : UIView
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) Q type;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)endColor;
- (void)setEndColor:;
- (void)setStartColor:;
- (id)startColor;
- (id)initWithStartColor:endColor:type:;
+ (Class)layerClass;
@end
