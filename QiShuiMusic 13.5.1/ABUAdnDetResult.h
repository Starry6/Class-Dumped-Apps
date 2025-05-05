@interface ABUAdnDetResult : NSObject
@property (nonatomic) BOOL isRepeatedly;
@property (nonatomic) NSString detResult;
@property (nonatomic) q detTime;
- (long long)detTime;
- (id)detResult;
- (BOOL)isRepeatedly;
- (void)setDetResult:;
- (void)setDetTime:;
- (void)setIsRepeatedly:;
- (void).cxx_destruct;
@end
