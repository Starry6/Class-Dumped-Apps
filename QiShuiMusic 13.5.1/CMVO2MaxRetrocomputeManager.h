@interface CMVO2MaxRetrocomputeManager : NSObject
@property (nonatomic) <CMVO2MaxRetrocomputeDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)connect;
- (void)retrocomputeStatusWithHandler:;
- (void)retrocomputeStateWithHandler:;
- (void)triggerRetrocomputeWithHandler:;
- (void)startRetrocomputeStatusUpdates;
- (void)stopRetrocomputeStatusUpdates;
@end
