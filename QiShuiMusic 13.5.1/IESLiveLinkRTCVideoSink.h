@interface IESLiveLinkRTCVideoSink : NSObject
@property (nonatomic) @? videoBufferCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pushVideoBuffer:timeInfo:extraData:;
- (void)setVideoBufferCallBack:;
- (id)videoBufferCallBack;
- (void).cxx_destruct;
@end
