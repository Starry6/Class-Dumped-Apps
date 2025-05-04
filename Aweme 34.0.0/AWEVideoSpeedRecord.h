@interface AWEVideoSpeedRecord : NSObject
@property (nonatomic) q file_size;
@property (nonatomic) q cost_time;
@property (nonatomic) q interval_time;
- (void)setFile_size:;
- (void)setCost_time:;
- (long long)file_size;
- (long long)cost_time;
- (long long)interval_time;
- (void)setInterval_time:;
@end
