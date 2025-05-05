@interface RTIStyledIntermediateText : NSObject
@property (nonatomic) NSString inputString;
@property (nonatomic) NSAttributedString displayString;
@property (nonatomic) {_NSRange=QQ} selectedRange;
@property (nonatomic) NSString searchString;
@property (nonatomic) q cursorVisibility;
- (id)displayString;
- (id)searchString;
- (id)selectedRange;
- (id)inputString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithInputString:displayString:selectionLocation:searchString:;
- (long long)cursorVisibility;
- (void)setCursorVisibility:;
+ (BOOL)supportsSecureCoding;
+ (id)intermediateTextWithInputString:displayString:;
+ (id)intermediateTextWithInputString:displayString:selectionLocation:;
+ (id)intermediateTextWithInputString:displayString:selectionLocation:searchString:;
@end
