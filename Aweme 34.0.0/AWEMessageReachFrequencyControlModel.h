@interface AWEMessageReachFrequencyControlModel : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) BOOL enable;
@property (nonatomic) double timeLimit;
@property (nonatomic) NSArray excludeScenes;
- (void)setExcludeScenes:;
- (id)excludeScenes;
- (BOOL)enable;
- (void)setTimeLimit:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (double)timeLimit;
- (void)setEnable:;
- (id)initWithDictionary:;
@end
