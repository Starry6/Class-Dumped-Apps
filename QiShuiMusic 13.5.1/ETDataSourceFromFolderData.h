@interface ETDataSourceFromFolderData : NSObject
@property (nonatomic) NSString imagesDir;
@property (nonatomic) NSMutableDictionary folderToImages;
@property (nonatomic) NSArray imageFileNames;
@property (nonatomic) NSMutableArray classNames;
@property (nonatomic) NSMutableDictionary pathToClassIndex;
@property (nonatomic) NSInteger numberOfClasses;
@property (nonatomic) BOOL balanceClassesForTraining;
- (void).cxx_destruct;
- (id)classNames;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:;
- (id)initWithFolder:balanceClassesForTraining:;
- (id)bufferWithPath:;
- (int)numberOfClasses;
- (void)setNumberOfClasses:;
- (BOOL)balanceClassesForTraining;
- (void)setBalanceClassesForTraining:;
- (id)imagesDir;
- (void)setImagesDir:;
- (id)folderToImages;
- (void)setFolderToImages:;
- (id)imageFileNames;
- (void)setImageFileNames:;
- (void)setClassNames:;
- (id)pathToClassIndex;
- (void)setPathToClassIndex:;
@end
