@interface CHSGaugeParameters : NSObject
@property (nonatomic) NSAttributedString leadingText;
@property (nonatomic) NSAttributedString trailingText;
@property (nonatomic) Q style;
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) NSArray gradientLocations;
@property (nonatomic) double fraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (double)fraction;
- (unsigned long long)hash;
- (id)gradientColors;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (unsigned long long)style;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)leadingText;
- (id)trailingText;
- (id)initWithLeadingText:trailingText:style:gradientColors:gradientLocations:fraction:;
- (id)gradientLocations;
+ (BOOL)supportsBSXPCSecureCoding;
@end
