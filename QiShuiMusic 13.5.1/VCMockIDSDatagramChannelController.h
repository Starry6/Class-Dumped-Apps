@interface VCMockIDSDatagramChannelController : VCObject
- (void)dealloc;
- (void)invalidate;
- (void)setWriteDatagramsBlock:;
- (void)setWriteDatagramBlock:;
- (void)setReadyToReadBlock:;
- (id)datagramChannelRequiresOptions:;
- (id)datagramChannelRequiresOptions:dataPath:;
+ (id)sharedInstance;
@end
