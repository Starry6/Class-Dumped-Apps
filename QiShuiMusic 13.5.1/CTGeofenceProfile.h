@interface CTGeofenceProfile : NSObject
@property (nonatomic) NSString dataSetName;
@property (nonatomic) NSString versionNumber;
@property (nonatomic) NSArray geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
- (id)init;
- (void)setVersionNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)versionNumber;
- (id)dataSetName;
- (void)setDataSetName:;
- (id)geofenceList;
- (void)setGeofenceList:;
- (BOOL)cellularDataPreferred;
- (void)setCellularDataPreferred:;
+ (BOOL)supportsSecureCoding;
@end
