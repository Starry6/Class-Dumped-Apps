@interface AWEShareChannelManager : HTSService
@property (nonatomic) NSMutableDictionary channels;
@property (nonatomic) NSMutableArray channelNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (id)channelForType:;
- (id)channelNames;
- (void)setChannelNames:;
- (void)registerShareChannelType:options:;
- (void)onServiceInitForIsolation;
- (id)sortedShareCountFromArray:;
- (id)sortedChannelsFromChannels:sorting:;
- (void)addOrReplaceShareChannel:;
- (void)removeShareChannelForType:;
- (id)channelsSupportShareType:inChannels:;
- (unsigned long long)optionForChannel:;
- (id)sortedChannelsFromFirstRowChannels:;
- (id)forceInsertChannels:isVideoShare:isFirstRow:;
- (id)sortedChannelsFromSecondRowChannels:;
- (id)channels;
- (void).cxx_destruct;
- (void)setChannels:;
- (id)allChannels;
@end
