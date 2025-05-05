@interface AVAudioSessionChannelDescription : NSObject
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString owningPortUID;
@property (nonatomic) Q channelNumber;
@property (nonatomic) I channelLabel;
- (id)init;
- (id)owningPortUID;
- (void)dealloc;
- (BOOL)isEqualToChannel:;
- (unsigned long long)hash;
- (id)channelName;
- (id)description;
- (unsigned int)channelLabel;
- (id)privateGetImplementation;
- (BOOL)isEqual:;
- (unsigned long long)channelNumber;
+ (id)privateCreateArray:portUID:;
+ (id)privateCreate:portUID:channelNumber:;
@end
