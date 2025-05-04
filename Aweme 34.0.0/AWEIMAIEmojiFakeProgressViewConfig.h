@interface AWEIMAIEmojiFakeProgressViewConfig : NSObject
@property (nonatomic) double maxTimeLength;
@property (nonatomic) double updateInterval;
@property (nonatomic) NSString title;
@property (nonatomic) double maxWaitingTime;
- (void)setMaxTimeLength:;
- (double)maxTimeLength;
- (double)maxWaitingTime;
- (void)setMaxWaitingTime:;
- (double)updateInterval;
- (void)setUpdateInterval:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
