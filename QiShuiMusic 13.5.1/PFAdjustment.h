@interface PFAdjustment : NSObject
@property (nonatomic) Q formatVersion;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary settings;
@property (nonatomic) NSString autoIdentifier;
@property (nonatomic) NSDictionary autoSettings;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString maskUUID;
- (id)init;
- (id)settings;
- (BOOL)enabled;
- (id)identifier;
- (unsigned long long)formatVersion;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)archiveDictionary;
- (id)initWithIdentifier:settings:enabled:;
- (id)initWithIdentifier:settings:autoIdentifier:autoSettings:enabled:;
- (id)initWithIdentifier:settings:autoIdentifier:autoSettings:enabled:maskUUID:;
- (id)autoIdentifier;
- (id)autoSettings;
- (id)maskUUID;
- (id)initWithArchiveDictionary:;
+ (BOOL)isValidArchiveDictionary:errors:;
@end
