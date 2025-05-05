@interface AXMOutputManager : NSObject
@property (nonatomic) AXMOutputManagerConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)disable;
- (void)playSound:;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:;
- (void)dispatcher:handleTask:;
- (id)initWithComponents:options:;
- (void)enableWithCompletion:;
- (id)dispatchRequest:;
- (void)speak:;
- (void)interrupt:;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (id)playActiveSound:;
@end
