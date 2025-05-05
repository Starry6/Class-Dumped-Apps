@interface ASDJobSchedulerRequestOptions : ASDRequestOptions
@property (nonatomic) BOOL verbose;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)verbose;
- (id)copyWithZone:;
- (void)setVerbose:;
+ (BOOL)supportsSecureCoding;
@end
