@interface RACGroupedSignal : RACSubject
@property (nonatomic) <NSCopying> key;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
+ (id)signalWithKey:;
@end
