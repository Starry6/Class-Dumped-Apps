@interface IMMessageNotificationTimer : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSNumber numberDingsLeft;
@property (nonatomic) BOOL areDingsRemaining;
- (void)dealloc;
- (id)initWithDate:;
- (id)date;
- (void)setDate:;
- (BOOL)areDingsRemaining;
- (void)reduceNumberDingsLeft;
- (id)numberDingsLeft;
@end
