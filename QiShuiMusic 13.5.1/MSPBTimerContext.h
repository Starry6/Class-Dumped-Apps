@interface MSPBTimerContext : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSDate date;
- (id)init;
- (void)setIsValid:;
- (id)date;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setDate:;
+ (id)contextWithDate:;
@end
