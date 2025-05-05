@interface NSCloudKitMirroringRequestOptions : NSObject
@property (nonatomic) CKOperationConfiguration operationConfiguration;
@property (nonatomic) q qualityOfService;
@property (nonatomic) BOOL allowsCellularAccess;
- (void)setQualityOfService:;
- (BOOL)allowsCellularAccess;
- (void)setAllowsCellularAccess:;
- (id)init;
- (void)dealloc;
- (void)setOperationConfiguration:;
- (long long)qualityOfService;
- (id)copy;
- (id)operationConfiguration;
- (id)copyWithZone:;
@end
