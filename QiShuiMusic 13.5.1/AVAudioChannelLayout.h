@interface AVAudioChannelLayout : NSObject
@property (nonatomic) I layoutTag;
@property (nonatomic) r^{AudioChannelLayout=III[1{AudioChannelDescription=II[3f]}]} layout;
@property (nonatomic) I channelCount;
- (unsigned long long)layoutSize;
- (id)init;
- (void)dealloc;
- (id)initWithLayout:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned int)layoutTag;
- (unsigned int)channelCount;
- (void)encodeWithCoder:;
- (id)layout;
- (id)initWithLayoutTag:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)layoutWithLayoutTag:;
+ (id)layoutWithLayout:;
@end
