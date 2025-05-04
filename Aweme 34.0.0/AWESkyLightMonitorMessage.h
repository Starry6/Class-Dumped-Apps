@interface AWESkyLightMonitorMessage : NSObject
@property (nonatomic) q action;
@property (nonatomic) NSError queryError;
@property (nonatomic) double queryStartTime;
@property (nonatomic) double queryEndTime;
@property (nonatomic) double renderEndTime;
- (double)queryStartTime;
- (void)setQueryStartTime:;
- (double)queryEndTime;
- (void)setQueryEndTime:;
- (void)setAction:;
- (long long)action;
- (void).cxx_destruct;
- (double)renderEndTime;
- (void)setRenderEndTime:;
- (id)queryError;
- (void)setQueryError:;
@end
