@interface MCCellularPrivateNetworkPayload : MCPayload
@property (nonatomic) NSString dataSetName;
@property (nonatomic) NSString versionNumber;
@property (nonatomic) NSArray geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
- (void)setVersionNumber:;
- (id)title;
- (void).cxx_destruct;
- (id)versionNumber;
- (id)dataSetName;
- (void)setDataSetName:;
- (id)geofenceList;
- (void)setGeofenceList:;
- (BOOL)cellularDataPreferred;
- (void)setCellularDataPreferred:;
- (id)initWithDictionary:profile:outError:;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)_validationErrorType:forInvalidKey:;
- (BOOL)_checkForValidContents:outError:;
- (void)_finishInitializationWithContents:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
