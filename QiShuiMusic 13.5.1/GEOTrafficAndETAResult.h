@interface GEOTrafficAndETAResult : NSObject
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) double seconds;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (nonatomic) NSString shortTrafficString;
@property (nonatomic) NSString longTrafficString;
@property (nonatomic) NSString writtenRouteName;
@property (nonatomic) NSString spokenRouteName;
- (BOOL)isSuccess;
- (double)seconds;
- (void)setSeconds:;
- (void).cxx_destruct;
- (id)writtenRouteName;
- (void)setWrittenRouteName:;
- (id)spokenRouteName;
- (void)setSpokenRouteName:;
- (double)conservativeTravelTime;
- (double)aggressiveTravelTime;
- (void)setIsSuccess:;
- (void)setAggressiveTravelTime:;
- (void)setConservativeTravelTime:;
- (id)shortTrafficString;
- (void)setShortTrafficString:;
- (id)longTrafficString;
- (void)setLongTrafficString:;
@end
