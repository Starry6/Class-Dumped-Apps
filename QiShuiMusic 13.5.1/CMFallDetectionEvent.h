@interface CMFallDetectionEvent : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) q resolution;
- (void)dealloc;
- (long long)resolution;
- (id)date;
- (id)initWithAnomalyEvent:;
- (id)initWithResolution:date:;
@end
