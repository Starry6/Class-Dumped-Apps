@interface IDSPseudonymRequestProperties : NSObject
@property (nonatomic) double requestTimeoutInterval;
- (id)initWithCoder:;
- (double)requestTimeoutInterval;
- (void)encodeWithCoder:;
- (id)description;
- (void)setRequestTimeoutInterval:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultProperties;
@end
