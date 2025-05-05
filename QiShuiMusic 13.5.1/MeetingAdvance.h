@interface MeetingAdvance : NSObject
+ (int)setPublishChannel:channelName:;
+ (int)setSubscribeChannels:channelsInfo:enableVolumeRescale:;
+ (int)enableRescaleAudioVolume:enableVolumeRescale:;
+ (int)setPublishSpecialStream:type:;
+ (int)setSubscribeSpecialStream:types:;
@end
