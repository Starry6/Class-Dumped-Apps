@interface BUCoreMLManager : NSObject
@property (nonatomic) NSMapTable mapTable;
@property (nonatomic) BOOL localModel;
@property (nonatomic) NSString modelPath;
- (id)decryprModelAtPath:;
- (id)downloadModelWithName:url:;
- (id)getCachePath;
- (id)initWithLocalPath:;
- (id)loadModelFromLocal:;
- (id)loadModelFromRemote:;
- (BOOL)localModel;
- (void)removeModelWithId:;
- (id)requireModel:version:;
- (id)requireModelWithId:;
- (void)setLocalModel:;
- (void)setModelPath:;
- (void)setup;
- (void).cxx_destruct;
- (id)modelPath;
- (id)mapTable;
- (void)setMapTable:;
- (id)initWithUrl:;
+ (id)sharedInstance;
@end
