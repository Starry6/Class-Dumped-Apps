@interface AWEConcernFrequencyControlConfigMaker : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q type;
@property (nonatomic) BOOL enableForeverStrategy;
@property (nonatomic) NSInteger maxShowTime;
- (void)setEnableForeverStrategy:;
- (void)setMaxShowTime:;
- (BOOL)enableForeverStrategy;
- (int)maxShowTime;
- (id)configMaxShowTimeForExitForever;
- (void)setKey:;
- (id)setup;
- (id)key;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)configType;
@end
