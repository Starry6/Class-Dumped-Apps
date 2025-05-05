@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSArray supportedInsertionPositions;
@property (nonatomic) q insertionPosition;
@property (nonatomic) MPRemotePlaybackQueue playbackQueue;
@property (nonatomic) NSNumber privateListeningOverride;
@property (nonatomic) NSString insertAfterContentItemID;
@property (nonatomic) q destinationOffset;
- (id)playbackQueue;
- (id)supportedInsertionPositions;
- (void).cxx_destruct;
- (id)insertAfterContentItemID;
- (id)initWithCommand:mediaRemoteType:options:;
- (id)privateListeningOverride;
- (long long)destinationOffset;
- (id)initWithCommand:playbackQueue:options:;
- (long long)insertionPosition;
@end
