@interface VEMattingDetectUnit : IESMMObject
@property (nonatomic) ^v mattingHandle;
@property (nonatomic) BOOL isInitedSuccess;
@property (nonatomic) NSError error;
@property (nonatomic) NSString algorithmResultDirPath;
- (BOOL)isInitedSuccess;
- (id)algorithmResultDirPath;
- (id)doPortraitMatting:rotateMode:;
- (id)getSuitableDecodeSize:;
- (id)initWithResourceFinder:error:;
- (BOOL)isRotateAngleIs180:;
- (id)mattingHandle;
- (BOOL)needRotateWithMode:;
- (void)setAlgorithmResultDirPath:;
- (void)setIsInitedSuccess:;
- (void)setMattingHandle:;
- (void)dealloc;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
@end
