@interface TTDownloadLogLite : JSONModel
@property (nonatomic) NSMutableArray errorLogArray;
- (void)addDownloadLog:error:;
- (id)errorLogArray;
- (void)setErrorLogArray:;
- (id)init;
- (void).cxx_destruct;
@end
