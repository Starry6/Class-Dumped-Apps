@interface TTVideoEngineTimeCalibration : NSObject
@property (nonatomic) q serverTimeToCali;
@property (nonatomic) q localTimeToCali;
@property (nonatomic) BOOL isCalibrated;
@property (nonatomic) NSDateFormatter dateFormatter;
- (long long)localTimeToCali;
- (long long)getServerTime;
- (id)getServerTimeStr:;
- (BOOL)isCalibrated;
- (long long)serverTimeToCali;
- (void)setIsCalibrated:;
- (void)setLocalTimeToCali:;
- (void)setServerTimeToCali:;
- (void)updateServerTime:localTime:;
- (id)dateFormatter;
- (void).cxx_destruct;
- (void)setDateFormatter:;
@end
