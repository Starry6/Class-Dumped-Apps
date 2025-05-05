@interface MSVTimer : NSObject
- (void)dealloc;
- (id)initWithInterval:repeats:queue:block:;
- (id)initWithInterval:queue:block:;
- (void).cxx_destruct;
- (void)invalidate;
+ (id)timerWithInterval:queue:block:;
+ (id)timerWithInterval:block:;
+ (id)timerWithInterval:repeats:queue:block:;
+ (id)timerWithInterval:repeats:block:;
@end
