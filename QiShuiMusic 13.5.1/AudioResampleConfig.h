@interface AudioResampleConfig : NSObject
@property (nonatomic) BOOL isUseM4A;
@property (nonatomic) Q sampelRate;
@property (nonatomic) BOOL useSampleRateFromBusiness;
- (BOOL)isUseM4A;
- (unsigned long long)sampelRate;
- (void)setIsUseM4A:;
- (void)setSampelRate:;
- (void)setUseSampleRateFromBusiness:;
- (BOOL)useSampleRateFromBusiness;
- (id)init;
@end
