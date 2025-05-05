@interface IESIMNetworkInternalDownloader : NSObject
@property (nonatomic) NSMutableArray tasks;
- (void)downloadWithURLString:targetPath:progressBlock:completion:;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:;
+ (void)downloadWithURLString:targetPath:progress:completion:;
+ (id)sharedInstance;
@end
