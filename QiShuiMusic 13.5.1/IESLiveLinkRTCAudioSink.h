@interface IESLiveLinkRTCAudioSink : NSObject
@property (nonatomic) @? audioDataCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioDataCallBack;
- (void)pushAudioData:size:timeStamp:;
- (void)setAudioDataCallBack:;
- (void).cxx_destruct;
@end
