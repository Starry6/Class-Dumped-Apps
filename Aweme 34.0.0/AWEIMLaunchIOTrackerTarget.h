@interface AWEIMLaunchIOTrackerTarget : NSObject
@property (nonatomic) q targetType;
@property (nonatomic) double duration;
@property (nonatomic) q count;
@property (nonatomic) NSDictionary cmdIDCountDict;
- (id)cmdIDCountDict;
- (void)setCmdIDCountDict:;
- (void)setCount:;
- (void)setDuration:;
- (long long)count;
- (long long)targetType;
- (void).cxx_destruct;
- (double)duration;
- (void)setTargetType:;
@end
