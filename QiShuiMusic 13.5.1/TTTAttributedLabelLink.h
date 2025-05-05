@interface TTTAttributedLabelLink : NSObject
@property (nonatomic) NSTextCheckingResult result;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSDictionary activeAttributes;
@property (nonatomic) NSDictionary inactiveAttributes;
@property (nonatomic) NSString accessibilityValue;
@property (nonatomic) @? linkTapBlock;
@property (nonatomic) @? linkLongPressBlock;
- (id)activeAttributes;
- (id)inactiveAttributes;
- (id)initWithAttributes:activeAttributes:inactiveAttributes:textCheckingResult:;
- (id)initWithAttributesFromLabel:textCheckingResult:;
- (id)linkLongPressBlock;
- (id)linkTapBlock;
- (void)setLinkLongPressBlock:;
- (void)setLinkTapBlock:;
- (id)result;
- (id)initWithCoder:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)setAccessibilityValue:;
@end
