@interface DMFFetchScreenshotRequest : DMFTaskRequest
@property (nonatomic) Q maxWidth;
@property (nonatomic) Q maxHeight;
@property (nonatomic) BOOL usesPixels;
@property (nonatomic) NSString sessionToken;
- (unsigned long long)maxWidth;
- (void)setMaxHeight:;
- (void)setMaxWidth:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sessionToken;
- (unsigned long long)maxHeight;
- (void)setSessionToken:;
- (BOOL)usesPixels;
- (void)setUsesPixels:;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
@end
