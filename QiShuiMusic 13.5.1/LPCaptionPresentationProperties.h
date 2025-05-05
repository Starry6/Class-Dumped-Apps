@interface LPCaptionPresentationProperties : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UIColor color;
@property (nonatomic) double textScale;
@property (nonatomic) NSNumber maximumNumberOfLines;
- (id)init;
- (void)setAttributedText:;
- (id)maximumNumberOfLines;
- (void)setColor:;
- (void)setText:;
- (void)setMaximumNumberOfLines:;
- (id)color;
- (void).cxx_destruct;
- (id)attributedText;
- (id)text;
- (void)setTextScale:;
- (double)textScale;
@end
