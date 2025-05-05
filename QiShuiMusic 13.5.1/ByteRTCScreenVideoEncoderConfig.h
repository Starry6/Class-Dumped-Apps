@interface ByteRTCScreenVideoEncoderConfig : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q frameRate;
@property (nonatomic) q maxBitrate;
@property (nonatomic) q minBitrate;
@property (nonatomic) q encoderPreference;
- (void)setEncoderPreference:;
- (long long)encoderPreference;
- (id)init;
- (void)setFrameRate:;
- (long long)frameRate;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (BOOL)isValid;
- (void)setHeight:;
- (id)description;
- (long long)maxBitrate;
- (void)setMaxBitrate:;
- (long long)minBitrate;
- (void)setMinBitrate:;
@end
