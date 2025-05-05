@interface AAQuotaInfoResponse : AAResponse
@property (nonatomic) NSArray usage;
@property (nonatomic) NSURL manageStorageURL;
@property (nonatomic) NSNumber availableStorageInBytes;
@property (nonatomic) NSNumber usedStorageInBytes;
@property (nonatomic) NSNumber totalStorageInBytes;
@property (nonatomic) BOOL hasMaxTier;
@property (nonatomic) NSString displayLabel;
- (id)usage;
- (id)displayLabel;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)manageStorageURL;
- (void)_initFromResponseDict;
- (id)totalStorageInBytes;
- (id)usedStorageInBytes;
- (id)availableStorageInBytes;
- (BOOL)hasMaxTier;
- (void)updateAccount:completion:;
@end
