@interface PLAssetResourceDownloadRequest : NSOperation
@property (nonatomic) NSInteger requestID;
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) Q cloudResourceType;
@property (nonatomic) NSString cplTaskIdentifier;
@property (nonatomic) NSError error;
- (id)objectID;
- (void)cancel;
- (id)error;
- (void)_onQueueAsync:;
- (void)main;
- (int)requestID;
- (void).cxx_destruct;
- (id)initWithRequestID:library:queue:cloudResourceType:managedObjectID:progressHandler:;
- (unsigned long long)cloudResourceType;
- (id)cplTaskIdentifier;
@end
