@interface IESMMAudioOnsetResult : NSObject
@property (nonatomic) NSInteger onset_len;
- (int)onset_len;
- (void)setOnset_len:;
- (void)setTime:;
- (void)dealloc;
- (id)time;
- (id)intensity;
- (void)setIntensity:;
@end
