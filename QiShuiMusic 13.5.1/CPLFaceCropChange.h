@interface CPLFaceCropChange : CPLRecordChange
@property (nonatomic) NSString personIdentifier;
@property (nonatomic) NSData resourceData;
@property (nonatomic) q faceCropType;
@property (nonatomic) NSString rejectedPersonIdentifier;
- (void).cxx_destruct;
- (id)resourceData;
- (void)setResourceData:;
- (void)setFaceCropType:;
- (void)setRejectedPersonIdentifier:;
- (id)personIdentifier;
- (id)rejectedPersonIdentifier;
- (long long)faceCropType;
- (void)setPersonIdentifier:;
- (id)propertiesDescription;
- (BOOL)validateFullRecord;
- (id)relatedIdentifier;
- (void)setRelatedIdentifier:;
- (BOOL)validateChangeWithError:;
- (id)personScopedIdentifier;
- (void)setPersonScopedIdentifier:;
+ (BOOL)supportsDeletion;
+ (BOOL)supportsDirectDeletion;
+ (Class)relatedRecordClass;
@end
