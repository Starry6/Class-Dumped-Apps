@interface MSUSBHelper : NSObject
@property (nonatomic) NSInteger connected;
@property (nonatomic) @? silentNotify;
- (void)setSilentNotify:;
- (id)silentNotify;
- (void)setConnected:;
- (id)init;
- (int)connected;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
