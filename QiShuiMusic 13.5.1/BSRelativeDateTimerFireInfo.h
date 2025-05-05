@interface BSRelativeDateTimerFireInfo : NSObject
@property (nonatomic) Q value;
@property (nonatomic) Q resolution;
@property (nonatomic) q comparedToNow;
@property (nonatomic) NSDate fireDate;
- (unsigned long long)resolution;
- (void).cxx_destruct;
- (unsigned long long)value;
- (id)fireDate;
- (id)copyWithZone:;
- (id)initWithValue:resolution:comparedToNow:fireDate:;
- (long long)comparedToNow;
@end
