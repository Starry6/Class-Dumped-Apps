@interface AWEEGCDTimer : NSObject
@property (nonatomic) IESECGCDTimer timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTimeInterval:target:selector:userInfo:repeats:dispatchQueue:;
- (id)initWithTimeInterval:queue:repeats:block:;
- (void)setTimer:;
- (void)schedule;
- (id)timer;
- (void)invalidate;
- (void)fire;
- (void).cxx_destruct;
- (void)suspend;
@end
