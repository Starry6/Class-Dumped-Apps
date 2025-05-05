@interface TRIClientNamespaceMetadata : TRIPBMessage
@property (nonatomic) I compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) TRIPBStringEnumDictionary factorNamePurgeabilityLevels;
@property (nonatomic) Q factorNamePurgeabilityLevels_Count;
+ (id)descriptor;
@end
