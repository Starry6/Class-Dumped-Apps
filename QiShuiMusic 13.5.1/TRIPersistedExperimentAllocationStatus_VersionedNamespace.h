@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) I compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
+ (id)descriptor;
@end
