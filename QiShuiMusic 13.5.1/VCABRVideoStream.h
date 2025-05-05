@interface VCABRVideoStream : NSObject
@property (nonatomic) NSString streamId;
@property (nonatomic) NSString codec;
@property (nonatomic) NSInteger segmentDuration;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger frameRate;
@property (nonatomic) NSInteger bandwidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)getBandwidth;
- (id)getCodec;
- (int)getSegmentDuration;
- (id)getStreamId;
- (void)setSegmentDuration:;
- (void)setFrameRate:;
- (void)setStreamId:;
- (void)setWidth:;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setCodec:;
- (int)getWidth;
- (int)getHeight;
- (void)setBandwidth:;
- (int)getFrameRate;
@end
