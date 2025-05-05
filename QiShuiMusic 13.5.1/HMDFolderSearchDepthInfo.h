@interface HMDFolderSearchDepthInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSNumber searchDepth;
@property (nonatomic) NSMutableDictionary subFolders;
- (void)setSearchDepth:;
- (id)searchDepth;
- (void)setSubFolders:;
- (id)subFolders;
- (id)path;
- (id)init;
- (void)setPath:;
- (void).cxx_destruct;
@end
