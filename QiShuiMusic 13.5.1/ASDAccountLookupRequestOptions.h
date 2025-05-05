@interface ASDAccountLookupRequestOptions : ASDRequestOptions
@property (nonatomic) BOOL authIfNeeded;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)authIfNeeded;
- (void)setAuthIfNeeded:;
+ (BOOL)supportsSecureCoding;
@end
