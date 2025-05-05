@interface HTSDPanda : NSObject
@property (nonatomic) NSError loadingError;
@property (nonatomic) NSArray loadedClassRecords;
@property (nonatomic) NSString sourceFilePath;
@property (nonatomic) NSString type;
@property (nonatomic) NSBundle bundle;
- (id)loadedClassRecords;
- (void)setLoadedClassRecords:;
- (void)setSourceFilePath:;
- (id)sourceFilePath;
- (void)setType:;
- (id)bundle;
- (id)type;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)loadingError;
- (void)setLoadingError:;
@end
