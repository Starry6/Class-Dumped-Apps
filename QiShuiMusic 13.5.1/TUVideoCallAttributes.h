@interface TUVideoCallAttributes : NSObject
@property (nonatomic) q remoteCameraOrientation;
@property (nonatomic) q localVideoContextSlotIdentifier;
@property (nonatomic) q remoteVideoContextSlotIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (long long)remoteCameraOrientation;
- (long long)localVideoContextSlotIdentifier;
- (long long)remoteVideoContextSlotIdentifier;
- (BOOL)isEqualToVideoCallAttributes:;
- (void)setRemoteCameraOrientation:;
- (void)setLocalVideoContextSlotIdentifier:;
- (void)setRemoteVideoContextSlotIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
