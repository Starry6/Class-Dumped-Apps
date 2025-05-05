@interface VCABRBufferInfo : NSObject
@property (nonatomic) NSString streamId;
@property (nonatomic) float playerAvailDuration;
@property (nonatomic) q fileAvailSize;
@property (nonatomic) q headSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getFileAvailSize;
- (long long)getHeadSize;
- (float)getPlayerAvailDuration;
- (id)getStreamId;
- (void)setFileAvailSize:;
- (void)setPlayerAvailDuration:;
- (void)setStreamId:;
- (void)setHeadSize:;
- (void).cxx_destruct;
@end
