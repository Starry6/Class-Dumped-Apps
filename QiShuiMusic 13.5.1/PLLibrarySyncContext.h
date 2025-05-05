@interface PLLibrarySyncContext : NSObject
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) PLCloudRecordOrganizer recordOrganizer;
@property (nonatomic) BOOL serverSupportsVision;
@property (nonatomic) BOOL serverSupportsGraphHome;
@property (nonatomic) NSArray personUUIDsToDedupe;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:;
- (BOOL)serverSupportsGraphHome;
- (BOOL)personUUIDIsDeleted:;
- (id)assetAdjustmentStateForCloudIdentifier:;
- (id)personUUIDsToDedupe;
- (id)recordOrganizer;
- (BOOL)serverSupportsVision;
- (void)setAssetAdjustmentState:forCloudIdentifer:;
- (void).cxx_destruct;
- (void)setPersonUUIDsToDedupe:;
- (id)makeFace;
- (id)personForUUID:;
- (void)deleteFaces:;
@end
