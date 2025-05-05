@interface VCRateControlServerBag : NSObject
@property (nonatomic) NSInteger experimentVersion;
@property (nonatomic) NSNumber experimentGroupIndex;
- (void)dealloc;
- (id)initWithMode:serverBagDict:;
- (BOOL)containsAllSecondaryKeysWithPrimaryKey:;
- (id)valueForType:value:;
- (id)valueForSecondaryKeyWithPrimaryKey:secondaryKey:type:;
- (id)getExperimentConfig:defaultValue:;
- (int)experimentVersion;
- (id)experimentGroupIndex;
- (id)getExperimentValueForKey:;
+ (id)keysWithMode:;
+ (id)profileNumberKeyWithMode:;
+ (id)groupKeysWithMode:primaryKey:;
+ (id)prefixForMode:;
@end
