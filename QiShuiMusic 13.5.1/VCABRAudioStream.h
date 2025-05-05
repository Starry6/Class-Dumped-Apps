@interface VCABRAudioStream : NSObject
@property (nonatomic) NSString streamId;
@property (nonatomic) NSString codec;
@property (nonatomic) NSInteger segmentDuration;
@property (nonatomic) NSInteger bandwidth;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)getBandwidth;
- (id)getCodec;
- (int)getSegmentDuration;
- (id)getStreamId;
- (void)setSegmentDuration:;
- (int)getSampleRate;
- (void)setStreamId:;
- (void).cxx_destruct;
- (void)setCodec:;
- (void)setSampleRate:;
- (void)setBandwidth:;
@end
