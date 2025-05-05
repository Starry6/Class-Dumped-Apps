@interface TRIAsset : TRIPBMessage
@property (nonatomic) NSString assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) I cloudKitIndex;
@property (nonatomic) BOOL hasCloudKitIndex;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL signed_p;
@property (nonatomic) BOOL hasSigned_p;
@property (nonatomic) Q size;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) NSInteger cloudKitContainer;
@property (nonatomic) BOOL hasCloudKitContainer;
+ (id)descriptor;
@end
