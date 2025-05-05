@interface TTLynxBridgePerfData : NSObject
@property (nonatomic) double preDispatchTS;
@property (nonatomic) double preRegisterExecuteTS;
@property (nonatomic) double preCommandExecuteTS;
@property (nonatomic) double preCallbackTS;
@property (nonatomic) double postCallbackTS;
- (double)postCallbackTS;
- (double)preCallbackTS;
- (double)preCommandExecuteTS;
- (double)preDispatchTS;
- (double)preRegisterExecuteTS;
- (void)setPostCallbackTS:;
- (void)setPreCallbackTS:;
- (void)setPreCommandExecuteTS:;
- (void)setPreDispatchTS:;
- (void)setPreRegisterExecuteTS:;
- (id)toDict;
@end
