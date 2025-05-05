@interface BSMonotonicReferenceTime : NSObject
@property (nonatomic) double timeIntervalSinceNow;
@property (nonatomic) double timeIntervalToNow;
- (id)date;
- (double)timeIntervalSinceNow;
- (double)timeIntervalToNow;
- (double)timeIntervalSinceReferenceTime:;
+ (id)now;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)referenceTimeWithTimeIntervalSinceNow:;
+ (id)referenceTimeForDate:;
@end
