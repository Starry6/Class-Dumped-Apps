@interface SADataSourceInfo : AceObject
@property (nonatomic) NSString contextIdentifier;
@property (nonatomic) NSString proximityHint;
@property (nonatomic) NSString sourceDeviceOwnership;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)contextIdentifier;
- (id)encodedClassName;
- (void)setContextIdentifier:;
- (id)proximityHint;
- (void)setProximityHint:;
- (id)sourceDeviceOwnership;
- (void)setSourceDeviceOwnership:;
@end
