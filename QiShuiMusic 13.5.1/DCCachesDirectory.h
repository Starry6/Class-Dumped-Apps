@interface DCCachesDirectory : NSObject
@property (nonatomic) NSURL cachesDirectoryURL;
- (id)init;
- (void).cxx_destruct;
- (id)cachesDirectoryURL;
+ (id)sharedCachesDirectory;
@end
