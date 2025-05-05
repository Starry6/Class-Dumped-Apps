@interface CPLRecordTarget : NSObject
@property (nonatomic) CPLScopedIdentifier scopedIdentifier;
@property (nonatomic) q targetState;
@property (nonatomic) BOOL shouldUploadToOtherRecord;
@property (nonatomic) CPLScopedIdentifier otherScopedIdentifier;
@property (nonatomic) NSArray targetScopedIdentifiers;
@property (nonatomic) CPLScopedIdentifier resourceScopedIdentifier;
@property (nonatomic) NSString simpleDescription;
- (id)redactedDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)targetState;
- (id)scopedIdentifier;
- (BOOL)isEqual:;
- (id)simpleDescription;
- (id)copyWithZone:;
- (id)initWithScopedIdentifier:otherScopedIdentifier:targetState:;
- (id)initWithScopedIdentifier:;
- (BOOL)shouldUploadToOtherRecord;
- (id)targetScopedIdentifiers;
- (id)resourceScopedIdentifier;
- (id)otherScopedIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)descriptionForTargetState:;
@end
