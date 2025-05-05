@interface AMSUniversalLinksUpdateResult : NSObject
@property (nonatomic) BOOL success;
- (id)initWithCoder:;
- (BOOL)success;
- (void)setSuccess:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
+ (id)archiveClasses;
@end
