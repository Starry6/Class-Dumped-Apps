@interface AVAudioSemantics : NSObject
@property (nonatomic) NSArray channelGroups;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithChannelGroups:;
- (id)initWithAudioSemantics:;
- (id)channelGroups;
- (void)setChannelGroups:;
+ (BOOL)supportsSecureCoding;
@end
