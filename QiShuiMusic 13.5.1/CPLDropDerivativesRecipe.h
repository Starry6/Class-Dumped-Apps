@interface CPLDropDerivativesRecipe : NSObject
@property (nonatomic) Q sourceResourceType;
@property (nonatomic) Q changeType;
@property (nonatomic) NSString uti;
@property (nonatomic) NSArray derivativeTypes;
@property (nonatomic) NSDictionary plistDescription;
- (unsigned long long)changeType;
- (id)redactedDescription;
- (id)initWithCoder:;
- (id)uti;
- (id)plistDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceResourceType:uti:changeType:droppingDerivativeTypes:;
- (unsigned long long)sourceResourceType;
- (id)derivativeTypes;
+ (BOOL)supportsSecureCoding;
+ (id)shortDescriptionForResourceChangeRecordType:;
+ (unsigned long long)changeRecordTypeFromShortDescription:;
+ (id)archiveArrayOfCPLDropDerivativeRecipes:;
+ (id)unarchiveArrayOfCPLDropDerivativeRecipesFrom:;
@end
