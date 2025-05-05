@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest
@property (nonatomic) NSSet objectIDsToFetch;
- (void)dealloc;
- (id)objectIDsToFetch;
- (void)setObjectIDsToFetch:;
- (id)initWithOptions:completionBlock:;
- (id)copyWithZone:;
@end
