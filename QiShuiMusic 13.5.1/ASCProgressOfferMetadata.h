@interface ASCProgressOfferMetadata : ASCOfferMetadata
@property (nonatomic) double percent;
@property (nonatomic) BOOL indeterminate;
- (BOOL)isIndeterminate;
- (void)setIndeterminate:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isProgress;
- (id)initWithPercent:;
- (id)initIndeterminate;
- (double)percent;
+ (BOOL)supportsSecureCoding;
@end
