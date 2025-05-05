@interface SnapshotTimer : NSObject
@property (nonatomic) BOOL taskIsComplete;
- (id)init;
- (void)checkout;
- (void)checkinWithTimeout:forTask:;
- (BOOL)taskIsComplete;
- (void)setTaskIsComplete:;
+ (void)takeSnapshotForTask:;
@end
