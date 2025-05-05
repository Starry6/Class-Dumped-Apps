@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) NSCloudKitMirroringRequestOptions options;
@property (nonatomic) @? requestCompletionBlock;
- (unsigned long long)requestType;
- (id)requestIdentifier;
- (void)dealloc;
- (id)requestCompletionBlock;
- (id)options;
- (BOOL)validateForUseWithStore:error:;
- (id)initWithOptions:completionBlock:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithActivity:options:completionBlock:;
+ (id)allRequestClasses;
@end
