@interface BWInferenceDepthScalingConfiguration : NSObject
@property (nonatomic) BOOL flipX;
@property (nonatomic) NSNumber NANValue;
@property (nonatomic) NSNumber clampMin;
@property (nonatomic) NSNumber clampMax;
@property (nonatomic) BOOL allowUpsampling;
@property (nonatomic) Q concurrencyWidth;
- (BOOL)flipX;
- (void)dealloc;
- (unsigned long long)concurrencyWidth;
- (id)initWithflipX:clampMin:clampMax:NANValue:allowUpsampling:concurrencyWidth:;
- (id)NANValue;
- (id)clampMax;
- (id)clampMin;
- (BOOL)allowUpsampling;
@end
