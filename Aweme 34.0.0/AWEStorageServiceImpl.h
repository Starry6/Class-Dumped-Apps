@interface AWEStorageServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)KVStorageHandler:options:;
- (id)KVUniversalStorageHandler;
- (id)fileStorageHandler:;
- (id)defaultFileManager;
+ (id)sharedInstance;
@end
