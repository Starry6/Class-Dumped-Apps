@interface GEOMapDataSubscription : NSObject
@property (nonatomic) NSString originatingBundleIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q dataTypes;
@property (nonatomic) q policy;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) GEOMapRegion region;
- (id)init;
- (long long)policy;
- (id)region;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)_descriptionWithIndent:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithIdentifier:originatingBundleIdentifier:dataTypes:policy:expirationDate:region:;
- (id)_originatingBundleIdentifier;
- (unsigned long long)dataTypes;
+ (BOOL)supportsSecureCoding;
@end
