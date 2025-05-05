@interface SAWatchData : AceObject
@property (nonatomic) BOOL configuredForLeftWrist;
@property (nonatomic) NSString interfaceOrientation;
@property (nonatomic) BOOL victoryDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)interfaceOrientation;
- (void)setInterfaceOrientation:;
- (id)encodedClassName;
- (BOOL)configuredForLeftWrist;
- (void)setConfiguredForLeftWrist:;
- (BOOL)victoryDevice;
- (void)setVictoryDevice:;
+ (id)watchData;
+ (id)watchDataWithDictionary:context:;
@end
