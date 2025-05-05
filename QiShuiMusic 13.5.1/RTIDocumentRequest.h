@interface RTIDocumentRequest : NSObject
@property (nonatomic) q flags;
@property (nonatomic) q textGranularity;
@property (nonatomic) q rectGranularity;
@property (nonatomic) q surroundingGranularityCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (void)setFlags:;
- (long long)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRectGranularity:;
- (long long)textGranularity;
- (long long)surroundingGranularityCount;
- (void)setTextGranularity:;
- (void)setSurroundingGranularityCount:;
- (long long)rectGranularity;
+ (BOOL)supportsSecureCoding;
@end
