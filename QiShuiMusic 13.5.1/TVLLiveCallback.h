@interface TVLLiveCallback : TTAVLiveCallback
@property (nonatomic) TVLManager manager;
- (void)frameDidReceiveBinarySei:andSize:;
- (void)frameWillRender:andDts:andPts:andData:;
- (id)initWithManager:version:;
- (void)onSeiImmediatelyCallback:andContent:;
- (void)packetDidReceive:andDts:andPts:andInfo:;
- (id)manager;
- (void).cxx_destruct;
@end
