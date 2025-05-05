@interface IESLiveLinkRTCInteractPCMWritter : NSObject
- (void)writeData:size:;
- (void)createFile:;
- (void)dealloc;
- (void)close;
- (id)initWithFileName:;
@end
