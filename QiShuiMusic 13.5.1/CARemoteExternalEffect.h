@interface CARemoteExternalEffect : CARemoteEffect
@property (nonatomic) NSDictionary propertiesByState;
@property (nonatomic) NSString effectName;
- (id)name;
- (BOOL)_setCARenderRemoteEffect:layer:;
- (id)_copyRenderRemoteEffectForLayer:;
- (void)setProperties:forState:;
- (id)propertiesForState:;
- (id)effectName;
- (void)setEffectName:;
- (id)propertiesByState;
- (void)setPropertiesByState:;
+ (BOOL)supportsSecureCoding;
+ (id)effectWithName:;
@end
