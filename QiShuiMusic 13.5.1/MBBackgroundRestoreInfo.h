@interface MBBackgroundRestoreInfo : NSObject
@property (nonatomic) NSInteger dataClassesRemaining;
@property (nonatomic) Q bytesRemaining;
@property (nonatomic) NSArray failedDomains;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (unsigned long long)bytesRemaining;
- (void)setBytesRemaining:;
- (int)dataClassesRemaining;
- (void)setDataClassesRemaining:;
- (id)failedDomains;
- (void)setFailedDomains:;
+ (BOOL)supportsSecureCoding;
@end
