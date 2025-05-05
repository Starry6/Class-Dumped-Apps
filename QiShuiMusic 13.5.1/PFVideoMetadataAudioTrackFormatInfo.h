@interface PFVideoMetadataAudioTrackFormatInfo : NSObject
@property (nonatomic) BOOL channelLayoutUsesHigherOrderAmbisonics;
@property (nonatomic) BOOL channelLayoutUsesChannelDescriptions;
@property (nonatomic) q channelCount;
- (long long)channelCount;
- (void).cxx_destruct;
- (BOOL)getHOAChannelCount:BEDChannelCount:;
- (BOOL)channelLayoutUsesChannelDescriptions;
- (BOOL)channelLayoutUsesHOA;
- (BOOL)channelLayoutUsesHigherOrderAmbisonics;
+ (id)infoForFirstAudioTrackOfAsset:matchingCodecPredicate:;
@end
