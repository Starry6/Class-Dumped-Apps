@interface IESLiveLinkLiveRtcVideoSink : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) @? videoFrameCallback;
@property (nonatomic) IESLiveLinkLiveRtc owner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUserId:owner:block:;
- (void)setVideoFrameCallback:;
- (id)videoFrameCallback;
- (void)renderPixelBuffer:rotation:contentType:extendedData:;
- (int)getRenderElapse;
- (id)userId;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (void)setUserId:;
@end
