@interface IPAEditOperation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithOperation:;
- (id)init;
- (id)identifier;
- (id)debugDescription;
- (id)settingsDictionary;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)autoIdentifier;
- (id)archivalRepresentation;
- (id)initWithSettingsDictionary:;
- (BOOL)isEqualToOperation:;
+ (id)operationIdentifierForUUID:;
+ (id)operationUUIDForIdentifier:;
+ (id)_identifierForUUIDMap;
+ (id)_uuidForIdentifierMap;
+ (id)_mapDispatchQueue;
+ (id)presetifyAdjustment:;
@end
