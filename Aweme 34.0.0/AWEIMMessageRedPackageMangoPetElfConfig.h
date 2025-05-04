@interface AWEIMMessageRedPackageMangoPetElfConfig : NSObject
@property (nonatomic) BOOL enablePefElfInfo;
@property (nonatomic) double startTimeSecond;
@property (nonatomic) double endTimeSecond;
- (BOOL)enablePefElfInfo;
- (void)setEnablePefElfInfo:;
- (double)startTimeSecond;
- (void)setStartTimeSecond:;
- (double)endTimeSecond;
- (void)setEndTimeSecond:;
- (id)initWithDictionary:;
@end
