@interface IESBridgePerfData : NSObject
@property (nonatomic) double preDispatchTS;
@property (nonatomic) double postDecodeTS;
@property (nonatomic) double preExecuteTS;
@property (nonatomic) double preCallbackTS;
@property (nonatomic) double postEncodeTS;
@property (nonatomic) double postCallbackTS;
- (double)postCallbackTS;
- (double)postDecodeTS;
- (double)postEncodeTS;
- (double)preCallbackTS;
- (double)preDispatchTS;
- (double)preExecuteTS;
- (void)setPostCallbackTS:;
- (void)setPostDecodeTS:;
- (void)setPostEncodeTS:;
- (void)setPreCallbackTS:;
- (void)setPreDispatchTS:;
- (void)setPreExecuteTS:;
- (id)copyWithZone:;
- (id)toDict;
@end
