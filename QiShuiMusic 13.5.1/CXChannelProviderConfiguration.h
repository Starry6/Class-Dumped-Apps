@interface CXChannelProviderConfiguration : NSObject
@property (nonatomic) I audioSessionID;
- (unsigned int)audioSessionID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqualToConfiguration:;
- (void)setAudioSessionID:;
- (id)sanitizedCopy;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)sanitizedCopyWithZone:;
- (void)updateSanitizedCopy:withZone:;
- (void)updateCopy:withZone:;
+ (BOOL)supportsSecureCoding;
@end
