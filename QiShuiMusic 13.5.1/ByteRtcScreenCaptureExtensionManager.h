@interface ByteRtcScreenCaptureExtensionManager : NSObject
@property (nonatomic) NSObject<ByteRtcScreenCaptureExtensionEvent> delegate;
@property (nonatomic) NSString _groupId;
- (int)showShare:;
- (void)stopShare;
- (void)set_groupId:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)_groupId;
+ (id)shared;
+ (void)tearDown;
@end
