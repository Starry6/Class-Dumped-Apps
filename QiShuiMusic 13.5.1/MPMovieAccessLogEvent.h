@interface MPMovieAccessLogEvent : NSObject
@property (nonatomic) Q numberOfSegmentsDownloaded;
@property (nonatomic) NSDate playbackStartDate;
@property (nonatomic) NSString URI;
@property (nonatomic) NSString serverAddress;
@property (nonatomic) Q numberOfServerAddressChanges;
@property (nonatomic) NSString playbackSessionID;
@property (nonatomic) double playbackStartOffset;
@property (nonatomic) double segmentsDownloadedDuration;
@property (nonatomic) double durationWatched;
@property (nonatomic) q numberOfStalls;
@property (nonatomic) q numberOfBytesTransferred;
@property (nonatomic) double observedBitrate;
@property (nonatomic) double indicatedBitrate;
@property (nonatomic) q numberOfDroppedVideoFrames;
- (id)URI;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)numberOfDroppedVideoFrames;
- (unsigned long long)numberOfSegmentsDownloaded;
- (id)playbackStartDate;
- (id)serverAddress;
- (unsigned long long)numberOfServerAddressChanges;
- (id)playbackSessionID;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (double)durationWatched;
- (long long)numberOfStalls;
- (long long)numberOfBytesTransferred;
- (double)observedBitrate;
- (double)indicatedBitrate;
- (id)_initWithAVItemAccessLogEvent:;
@end
