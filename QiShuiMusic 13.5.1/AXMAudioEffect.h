@interface AXMAudioEffect : NSObject
@property (nonatomic) AXMAudioDataSource inputSource;
- (void).cxx_destruct;
- (id)inputSource;
- (void)setInputSource:;
- (void)processSamples:;
@end
