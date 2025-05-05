@interface ABUGCDTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
+ (id)startTimerWithId:execAction:after:interval:repeats:mainThread:;
@end
