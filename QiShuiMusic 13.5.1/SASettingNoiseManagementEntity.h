@interface SASettingNoiseManagementEntity : SASettingEntity
@property (nonatomic) NSString previousValue;
@property (nonatomic) NSString value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)previousValue;
- (id)value;
- (void)setPreviousValue:;
+ (id)noiseManagementEntity;
+ (id)noiseManagementEntityWithDictionary:context:;
@end
