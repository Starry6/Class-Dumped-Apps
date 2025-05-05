@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest
@property (nonatomic) BOOL lockOrientation;
@property (nonatomic) Q interfaceOrientation;
- (id)init;
- (unsigned long long)interfaceOrientation;
- (void)setInterfaceOrientation:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setLockOrientation:;
- (BOOL)lockOrientation;
+ (BOOL)supportsSecureCoding;
@end
