@interface IESFalconStatRecorder : NSObject
@property (nonatomic) NSMutableArray statArray;
- (void)_sendFalconStat:;
- (void)_sendFalconStatIfNeeded;
- (void)_sendFalconStatWithArray:remainTimes:;
- (void)_sendFalconStatWithParams:completion:;
- (id)falconCommonParams;
- (void)setStatArray:;
- (id)statArray;
- (void)setup;
- (void).cxx_destruct;
+ (void)recordFalconStat:;
+ (id)sharedInstance;
@end
