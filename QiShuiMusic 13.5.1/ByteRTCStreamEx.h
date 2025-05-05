@interface ByteRTCStreamEx : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) BOOL isScreen;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) NSArray videoStreamDescriptions;
@property (nonatomic) ByteRTCVideoSolution maxVideoStreamDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isScreen;
- (void)setIsScreen:;
- (id)videoStreamDescriptions;
- (id)maxVideoStreamDescription;
- (void)setVideoStreamDescriptions:;
- (void)setMaxVideoStreamDescription:;
- (void)setHasVideo:;
- (id)userId;
- (BOOL)hasVideo;
- (void)setHasAudio:;
- (void).cxx_destruct;
- (void)setUserId:;
- (BOOL)hasAudio;
@end
