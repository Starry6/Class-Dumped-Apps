@interface HMDFolderInfoModel : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSString reportType;
@property (nonatomic) BOOL isUserCustomPath;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) Q size;
@property (nonatomic) BOOL includeFolder;
@property (nonatomic) Q level;
@property (nonatomic) NSMutableDictionary childs;
- (id)childs;
- (BOOL)includeFolder;
- (BOOL)isUserCustomPath;
- (void)setChilds:;
- (void)setIncludeFolder:;
- (void)setIsUserCustomPath:;
- (void)setLevel:;
- (id)path;
- (id)init;
- (unsigned long long)level;
- (void)setPath:;
- (BOOL)isFolder;
- (void)setReportType:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)reportType;
- (void)setSize:;
- (unsigned long long)size;
- (void)setIsFolder:;
@end
