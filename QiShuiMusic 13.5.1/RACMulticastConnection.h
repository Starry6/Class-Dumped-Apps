@interface RACMulticastConnection : NSObject
@property (nonatomic) RACSignal sourceSignal;
@property (nonatomic) RACSerialDisposable serialDisposable;
@property (nonatomic) RACSignal signal;
- (id)autoconnect;
- (id)initWithSourceSignal:subject:;
- (id)serialDisposable;
- (void)setSerialDisposable:;
- (id)sourceSignal;
- (id)signal;
- (void).cxx_destruct;
- (id)connect;
@end
