@interface ICPlayActivityAudioQualityProperties : NSObject
@property (nonatomic) q bitRate;
@property (nonatomic) q bitDepth;
@property (nonatomic) NSString channelLayoutDescription;
@property (nonatomic) I codec;
@property (nonatomic) NSString codecString;
@property (nonatomic) q sampleRate;
@property (nonatomic) BOOL spatialized;
- (long long)bitDepth;
- (long long)sampleRate;
- (id)initWithCoder:;
- (unsigned int)codec;
- (void)encodeWithCoder:;
- (id)_copyWithClass:zone:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (long long)bitRate;
- (BOOL)isSpatialized;
- (id)copyWithZone:;
- (id)codecString;
- (id)channelLayoutDescription;
+ (BOOL)supportsSecureCoding;
@end
