@interface AWENearbyAttributedLabelCountDownModel : AWENearbyAttributedLabelBaseModel
@property (nonatomic) NSInteger timestamp;
@property (nonatomic) NSString color;
@property (nonatomic) NSString font;
@property (nonatomic) double fontSize;
- (int)timestamp;
- (double)fontSize;
- (id)color;
- (void)setColor:;
- (void)setFontSize:;
- (void)setTimestamp:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
+ (id)JSONKeyPathsByPropertyKey;
@end
