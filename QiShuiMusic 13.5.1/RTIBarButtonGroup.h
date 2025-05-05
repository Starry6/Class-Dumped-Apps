@interface RTIBarButtonGroup : NSObject
@property (nonatomic) NSArray itemWidths;
@property (nonatomic) float representativeItemWidth;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRepresentativeItemWidth:;
- (id)itemWidths;
- (float)representativeItemWidth;
- (void)setItemWidths:;
+ (BOOL)supportsSecureCoding;
@end
