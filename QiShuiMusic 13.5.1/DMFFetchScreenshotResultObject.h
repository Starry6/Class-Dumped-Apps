@interface DMFFetchScreenshotResultObject : CATTaskResultObject
@property (nonatomic) NSData screenshotData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)screenshotData;
+ (BOOL)supportsSecureCoding;
@end
