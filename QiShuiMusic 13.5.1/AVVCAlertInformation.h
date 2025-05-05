@interface AVVCAlertInformation : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) q mode;
@property (nonatomic) Q alertEndTime;
- (void)setType:;
- (int)type;
- (long long)mode;
- (void)setMode:;
- (id)initWithAlertType:mode:endTime:;
- (unsigned long long)alertEndTime;
- (void)setAlertEndTime:;
@end
