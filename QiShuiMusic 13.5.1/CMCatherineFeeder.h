@interface CMCatherineFeeder : NSObject
@property (nonatomic) CMCatherineFeederInternal internal;
- (id)init;
- (void)dealloc;
- (id)internal;
- (void)feedCatherine:confidence:;
@end
