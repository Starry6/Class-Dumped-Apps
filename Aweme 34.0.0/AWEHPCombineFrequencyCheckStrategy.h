@interface AWEHPCombineFrequencyCheckStrategy : NSObject
@property (nonatomic) NSDate lastPassiveSuccessRequestTime;
- (void)setLastPassiveSuccessRequestTime:;
- (id)lastPassiveSuccessRequestTime;
- (void)onRequestSuccess;
- (BOOL)checkCanRequestWithScene:;
- (BOOL)checkCanRequestWithRequest:;
- (void).cxx_destruct;
@end
