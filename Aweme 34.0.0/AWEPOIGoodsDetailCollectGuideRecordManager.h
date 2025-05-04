@interface AWEPOIGoodsDetailCollectGuideRecordManager : NSObject
@property (nonatomic) NSString lastActivityID;
@property (nonatomic) NSString lastPoiSessionID;
@property (nonatomic) NSString lastPoiEnterId;
@property (nonatomic) q repeatShowTime;
@property (nonatomic) q multiShowTime;
@property (nonatomic) q theSamePoiShowTimes;
@property (nonatomic) NSDate userGuideShowDate;
- (id)lastActivityID;
- (void)setLastActivityID:;
- (id)lastPoiSessionID;
- (void)setLastPoiSessionID:;
- (id)lastPoiEnterId;
- (void)setLastPoiEnterId:;
- (long long)repeatShowTime;
- (void)setRepeatShowTime:;
- (long long)multiShowTime;
- (void)setMultiShowTime:;
- (long long)theSamePoiShowTimes;
- (void)setTheSamePoiShowTimes:;
- (id)userGuideShowDate;
- (void)setUserGuideShowDate:;
- (void).cxx_destruct;
@end
