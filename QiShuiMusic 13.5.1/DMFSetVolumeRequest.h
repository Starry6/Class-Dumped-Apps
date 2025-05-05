@interface DMFSetVolumeRequest : DMFTaskRequest
@property (nonatomic) float volume;
- (float)volume;
- (void)setVolume:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
