@interface AsyncInvokeRoster : NSObject
@property (nonatomic) BOOL engineDestroyPending;
@property (nonatomic) q roomPengingCount;
- (BOOL)engineDestroyPending;
- (void)setEngineDestroyPending:;
- (long long)roomPengingCount;
- (void)setRoomPengingCount:;
+ (id)shared;
@end
