@interface AWECharacterRectModelBuilder : NSObject
@property (nonatomic) {CGSize=dd} labelSize;
@property (nonatomic) q numberOfLines;
@property (nonatomic) q lineBreakMode;
@property (nonatomic) q textAlignment;
@property (nonatomic) NSAttributedString attributedText;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (id)attributedText;
- (id)initWithBlock:;
- (void)setNumberOfLines:;
- (void)setLineBreakMode:;
- (void)setAttributedText:;
- (void).cxx_destruct;
- (void)setTextAlignment:;
- (long long)textAlignment;
- (id)labelSize;
- (void)setLabelSize:;
+ (id)instanceWithBlock:;
@end
