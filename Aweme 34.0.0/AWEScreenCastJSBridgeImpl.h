@interface AWEScreenCastJSBridgeImpl : NSObject
@property (nonatomic) BDScreenCastPlayItem playItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playItem;
- (void)setPlayItem:;
- (void)didConnectToDevice:;
- (void)sendVideoPlayEventWithParams:;
- (void)sendVideoOverEventWithCompleted:params:;
- (void)sendVideoPlayBrokenEventWithParams:;
- (void)invokeWebEvent:uuid:params:;
- (void)updatePlayItem:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerJSBridgeHandler;
+ (void)_aweLazyRegisterLoad;
@end
