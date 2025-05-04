@interface AWECFIndenture : NSObject
@property (nonatomic) NSError loadingError;
@property (nonatomic) NSArray loadedClassRecords;
@property (nonatomic) NSString sourceFilePath;
@property (nonatomic) NSString type;
@property (nonatomic) NSBundle bundle;
- (id)sourceFilePath;
- (id)loadedClassRecords;
- (void)setLoadedClassRecords:;
- (void)setSourceFilePath:;
- (id)bundle;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)loadingError;
- (void)setLoadingError:;
@end
