@interface ByteRTCTranscodingSyncControlParam : NSObject
@property (nonatomic) BOOL syncStream;
@property (nonatomic) NSString syncBaseUser;
@property (nonatomic) q syncQueueLengthMs;
@property (nonatomic) BOOL syncClientVideoNeedMix;
@property (nonatomic) BOOL syncOnlySendPts;
- (BOOL)syncStream;
- (void)setSyncStream:;
- (id)syncBaseUser;
- (void)setSyncBaseUser:;
- (long long)syncQueueLengthMs;
- (void)setSyncQueueLengthMs:;
- (BOOL)syncClientVideoNeedMix;
- (void)setSyncClientVideoNeedMix:;
- (BOOL)syncOnlySendPts;
- (void)setSyncOnlySendPts:;
- (id)init;
- (void).cxx_destruct;
@end
