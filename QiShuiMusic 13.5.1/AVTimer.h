@interface AVTimer : NSObject
@property (nonatomic) double interval;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (double)interval;
- (id)initWithTimeInterval:queue:block:repeats:;
@end
