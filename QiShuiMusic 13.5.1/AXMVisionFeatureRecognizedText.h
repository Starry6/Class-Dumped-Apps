@interface AXMVisionFeatureRecognizedText : NSObject
@property (nonatomic) VNRecognizedText text;
@property (nonatomic) {_NSRange=QQ} textRange;
- (id)initWithCoder:;
- (id)textRange;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)text;
- (id)initWithRecognizedText:range:;
+ (BOOL)supportsSecureCoding;
@end
