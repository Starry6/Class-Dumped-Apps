@interface CMWaterSubmersionManager : NSObject
@property (nonatomic) <CMWaterSubmersionManagerDelegate> delegate;
- (void)_setDelegate:;
- (void)_connect;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_disconnect;
- (void)_handleMessage:;
- (id)delegate;
- (void).cxx_destruct;
- (void)notifySubmersionStateProcessingCompleted;
+ (long long)authorizationStatus;
+ (BOOL)waterSubmersionAvailable;
@end
