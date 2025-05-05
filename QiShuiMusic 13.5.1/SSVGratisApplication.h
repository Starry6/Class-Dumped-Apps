@interface SSVGratisApplication : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSNumber externalVersionIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (void)setBundleVersion:;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)externalVersionIdentifier;
- (void)setExternalVersionIdentifier:;
@end
