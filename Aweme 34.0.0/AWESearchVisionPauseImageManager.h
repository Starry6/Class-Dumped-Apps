@interface AWESearchVisionPauseImageManager : NSObject
@property (nonatomic) NSString rootPath;
@property (nonatomic) UIImage currentPauseImage;
- (id)currentPauseImage;
- (id)getFilePathWithFileName:;
- (void)setCurrentPauseImage:;
- (void)removeAllImage;
- (void)saveImage:filePath:completeBlock:;
- (void)addObserver;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (id)rootPath;
- (void)setRootPath:;
+ (id)shareInstance;
@end
