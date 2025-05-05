@interface STBlueprintConfiguration : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) NSData payloadPlist;
@property (nonatomic) STBlueprint blueprint;
@property (nonatomic) <STSerializableManagedObject> syncableRootObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)updateWithDictionaryRepresentation:;
- (id)syncableRootObject;
- (id)dictionaryRepresentation;
- (id)cemConfiguration;
- (void)setCemConfiguration:;
+ (id)blueprintConfigurationTypeForDeclaration:;
+ (Class)cemDeclarationClassForConfigurationType:;
+ (id)cemConfigurationIdentifierWithType:forUser:;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:ofType:;
@end
