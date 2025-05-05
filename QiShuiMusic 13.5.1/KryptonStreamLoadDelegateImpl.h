@interface KryptonStreamLoadDelegateImpl : NSObject
@property (nonatomic) {function<void (lynx::canvas::StreamLoadStatus callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onData:;
- (void)onStart:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)onError:;
- (void)onEnd;
@end
