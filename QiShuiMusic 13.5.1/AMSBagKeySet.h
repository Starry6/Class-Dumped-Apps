@interface AMSBagKeySet : NSObject
@property (nonatomic) NSMutableDictionary defaultValues;
- (void)setDefaultValues:;
- (id)init;
- (id)defaultValues;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (void)registerBagKeySetForMetricsConfiguration:;
+ (void)registerBagKeySetForMetricsRecorder:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultValues;
+ (void)registerBagKeySet:forProfile:profileVersion:;
+ (id)defaultValueForKey:profile:profileVersion:;
@end
