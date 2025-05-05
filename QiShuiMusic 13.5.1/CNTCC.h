@interface CNTCC : NSObject
@property (nonatomic) <CNTCC> tccServices;
- (void)setTccServices:;
- (id)tccServices;
- (void).cxx_destruct;
- (int)accessPreflight;
- (void)simulate:;
+ (id)sharedInstance;
@end
