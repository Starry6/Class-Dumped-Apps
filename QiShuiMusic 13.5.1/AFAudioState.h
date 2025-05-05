@interface AFAudioState : NSObject
@property (nonatomic) I audioSessionID;
- (unsigned int)audioSessionID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setAudioSessionID:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
