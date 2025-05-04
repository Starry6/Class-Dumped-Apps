@interface AWEDeliveryTimeMsgModel : AWEDeliveryBaseMsgModel
@property (nonatomic) double updateTimeStamp;
@property (nonatomic) NSString timeString;
- (double)updateTimeStamp;
- (void)setUpdateTimeStamp:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setTimeString:;
- (id)timeString;
+ (Class)cellClass;
@end
