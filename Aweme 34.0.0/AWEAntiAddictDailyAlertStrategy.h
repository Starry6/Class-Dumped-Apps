@interface AWEAntiAddictDailyAlertStrategy : NSObject
@property (nonatomic) BOOL isDay;
@property (nonatomic) NSString strategyName;
@property (nonatomic) q triggerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)satisfiedWithPreparedData:;
- (id)getActionWithPreparedData:;
- (BOOL)isDay;
- (long long)triggerType;
- (id)strategyName;
- (void)setIsDay:;
@end
