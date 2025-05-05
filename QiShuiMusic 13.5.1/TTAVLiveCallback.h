@interface TTAVLiveCallback : TTAVTraitObject
- (void)enableMethod:;
- (void)frameDidReceiveBinarySei:andSize:;
- (void)frameWillRender:andDts:andPts:andData:;
- (void)onSeiImmediatelyCallback:andContent:;
- (void)packetDidReceive:andDts:andPts:andInfo:;
- (BOOL)isEnabled:;
- (id)initWithVersion:;
@end
