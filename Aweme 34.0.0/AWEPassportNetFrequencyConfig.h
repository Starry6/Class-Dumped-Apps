@interface AWEPassportNetFrequencyConfig : NSObject
@property (nonatomic) NSMutableDictionary frequencyMap;
- (id)frequencyMap;
- (void)setFrequencyMap:;
- (void).cxx_destruct;
+ (BOOL)networkFrequencyHavePathUrl:;
+ (BOOL)requestUrlIsInFrequencyTime:;
+ (id)urlTransformPath:;
+ (id)networkFrequencyConfig;
+ (BOOL)shouldRequestNetworkWithUrl:;
+ (void)requestErrorWithUrl:;
+ (id)sharedInstance;
@end
