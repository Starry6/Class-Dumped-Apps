@interface AWEIMExamControlInfo : NSObject
@property (nonatomic) q examId;
@property (nonatomic) q examStatus;
@property (nonatomic) q validTime;
@property (nonatomic) Q type;
- (long long)validTime;
- (void)setValidTime:;
- (long long)examId;
- (void)setExamId:;
- (void)setExamStatus:;
- (long long)examStatus;
- (unsigned long long)type;
- (void)setType:;
- (id)initWithDict:;
@end
