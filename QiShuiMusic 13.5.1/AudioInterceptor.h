@interface AudioInterceptor : NSObject
@property (nonatomic) <AudioInterceptorDelegate> delegate;
@property (nonatomic) <AudioInterceptorSource> source;
- (long long)addEffect;
- (void)setEffect:fadeInOutConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setup:;
+ (long long)checkEffect:;
@end
