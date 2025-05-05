@interface PPTripEventQuery : PPEventQuery
@property (nonatomic) C tripOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned char)tripOptions;
- (void)setTripOptions:;
+ (BOOL)supportsSecureCoding;
@end
