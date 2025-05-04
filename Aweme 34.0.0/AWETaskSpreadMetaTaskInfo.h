@interface AWETaskSpreadMetaTaskInfo : NSObject
@property (nonatomic) Q state;
@property (nonatomic) Q cancelCount;
- (unsigned long long)state;
- (id)description;
- (void)setState:;
- (void)setCancelCount:;
- (unsigned long long)cancelCount;
@end
