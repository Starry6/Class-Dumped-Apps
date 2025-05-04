@interface AWEIMUserDBCleanerTask : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString subPath;
@property (nonatomic) NSArray extensions;
@property (nonatomic) BOOL isUidPath;
@property (nonatomic) BOOL onlyOneFile;
- (BOOL)onlyOneFile;
- (void)p_cleanOnlyOneFile;
- (BOOL)isUidPath;
- (void)p_cleanUidsDir;
- (id)subPath;
- (BOOL)isMatchPathExtension:extensions:;
- (id)initWithFileRoot:fileName:extension:;
- (id)initWithUidsPath:uidSubPath:extension:;
- (void)cleanHistoryFile;
- (id)extensions;
- (id)path;
- (id)fileName;
- (void).cxx_destruct;
- (BOOL)directoryExistsAtPath:;
@end
