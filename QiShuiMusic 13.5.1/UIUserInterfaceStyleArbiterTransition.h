@interface UIUserInterfaceStyleArbiterTransition : NSObject
@property (nonatomic) q type;
@property (nonatomic) q hour;
@property (nonatomic) q minute;
- (long long)minute;
- (long long)hour;
- (void)setMinute:;
- (void)setHour:;
- (void)setType:;
- (long long)type;
- (id)description;
@end
