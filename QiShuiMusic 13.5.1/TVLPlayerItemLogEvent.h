@interface TVLPlayerItemLogEvent : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) q duration;
@property (nonatomic) BOOL ongoing;
@property (nonatomic) NSDictionary logInfo;
- (id)logInfo;
- (id)startDate;
- (void)end;
- (void)start;
- (id)endDate;
- (void).cxx_destruct;
- (long long)duration;
- (BOOL)isOngoing;
@end
