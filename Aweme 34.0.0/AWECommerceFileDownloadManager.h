@interface AWECommerceFileDownloadManager : NSObject
@property (nonatomic) NSMutableDictionary fileMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filePathWith:;
- (void)downloadFileWith:;
- (id)init;
- (id)fileMap;
- (void)setFileMap:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
