@interface CUFileServerSession : NSObject
@property (nonatomic) ^{?=iqq*iqqi{_opaque_pthread_mutex_t=q[56c]}^{_telldir}} dirStream;
@property (nonatomic) Q lastRequestTicks;
@property (nonatomic) Q sessionID;
- (void)setSessionID:;
- (unsigned long long)sessionID;
- (id)dirStream;
- (void)setDirStream:;
- (unsigned long long)lastRequestTicks;
- (void)setLastRequestTicks:;
@end
