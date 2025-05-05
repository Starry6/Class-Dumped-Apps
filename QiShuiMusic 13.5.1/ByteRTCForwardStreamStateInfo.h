@interface ByteRTCForwardStreamStateInfo : NSObject
@property (nonatomic) NSString roomId;
@property (nonatomic) q state;
@property (nonatomic) q error;
- (id)roomId;
- (void)setRoomId:;
- (void)setState:;
- (void)setError:;
- (long long)error;
- (long long)state;
- (void).cxx_destruct;
@end
