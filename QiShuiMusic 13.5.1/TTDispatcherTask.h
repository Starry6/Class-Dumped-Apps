@interface TTDispatcherTask : NSObject
@property (nonatomic) NSMutableArray sameTaskResultBlockArray;
@property (nonatomic) NSString urlKey;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) DownloadGlobalParameters userParameters;
@property (nonatomic) @? onRealTask;
@property (nonatomic) @? onRealQueryTask;
@property (nonatomic) @? resultBlock;
- (void)addResultBlock:;
- (id)onRealQueryTask;
- (void)executeAllResultBlock:;
- (id)onRealTask;
- (void)replaceFilePath:task:;
- (id)sameTaskResultBlockArray;
- (void)setOnRealQueryTask:;
- (void)setOnRealTask:;
- (void)setSameTaskResultBlockArray:;
- (void)setUserParameters:;
- (void)setIsDeleted:;
- (id)init;
- (BOOL)isDeleted;
- (void)dealloc;
- (id)resultBlock;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)userParameters;
- (id)urlKey;
- (void)setUrlKey:;
@end
