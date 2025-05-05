@interface SNAudioConfiguration : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) NSString mode;
@property (nonatomic) Q options;
@property (nonatomic) NSArray channelMap;
@property (nonatomic) BOOL useSiriAudioRouting;
- (void)setOptions:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)description;
- (id)mode;
- (BOOL)isEqual:;
- (void)setMode:;
- (id)category;
- (id)copyWithZone:;
- (id)channelMap;
- (void)setChannelMap:;
- (BOOL)useSiriAudioRouting;
- (void)setUseSiriAudioRouting:;
+ (BOOL)supportsSecureCoding;
@end
