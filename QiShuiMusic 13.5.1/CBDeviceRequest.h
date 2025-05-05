@interface CBDeviceRequest : NSObject
@property (nonatomic) I requestFlags;
@property (nonatomic) double timeoutSeconds;
- (void)setTimeoutSeconds:;
- (double)timeoutSeconds;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (id)description;
- (unsigned int)requestFlags;
- (void)setRequestFlags:;
@end
