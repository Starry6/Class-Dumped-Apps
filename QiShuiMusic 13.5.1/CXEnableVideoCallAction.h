@interface CXEnableVideoCallAction : CXCallAction
@property (nonatomic) BOOL videoEnabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (void)setVideoEnabled:;
- (id)sanitizedCopyWithZone:;
- (BOOL)isVideoEnabled;
- (void)updateCopy:withZone:;
- (id)initWithCallUUID:videoEnabled:;
+ (BOOL)supportsSecureCoding;
@end
