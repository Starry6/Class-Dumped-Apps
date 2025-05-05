@interface BDUGLuckyCounterTaskConfig : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSString activityName;
@property (nonatomic) Q sourceType;
- (id)initWithToken:taskName:activityName:sourceType:;
- (unsigned long long)sourceType;
- (id)token;
- (void)setSourceType:;
- (id)taskName;
- (void)setToken:;
- (void)setTaskName:;
- (void).cxx_destruct;
- (id)activityName;
- (void)setActivityName:;
@end
