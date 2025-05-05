@interface HMDNetTrafficUsageManagerConfig : NSObject
@property (nonatomic) Q requestBytesThreshold;
@property (nonatomic) Q imageBytesThreshold;
@property (nonatomic) NSInteger requestFreqThreshold;
- (unsigned long long)imageBytesThreshold;
- (unsigned long long)requestBytesThreshold;
- (int)requestFreqThreshold;
- (void)setImageBytesThreshold:;
- (void)setRequestBytesThreshold:;
- (void)setRequestFreqThreshold:;
- (id)init;
@end
