@interface LynxKryptonResourceLoadDelegate : NSObject
@property (nonatomic) <KryptonStreamLoadDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onData:;
- (void)onStart:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)onError:;
- (void)onEnd;
@end
