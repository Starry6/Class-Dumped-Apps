@interface QLPlatformImage : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) UIImage UIImage;
@property (nonatomic) ^{CGImage=} CGImage;
@property (nonatomic) @? cleanupDataBlock;
@property (nonatomic) I orientation;
@property (nonatomic) double scale;
- (void)dealloc;
- (void)setScale:;
- (unsigned int)orientation;
- (id)CGImage;
- (void).cxx_destruct;
- (double)scale;
- (void)setSize:;
- (void)setOrientation:;
- (id)size;
- (id)UIImage;
- (void)setCGImage:;
- (id)cleanupDataBlock;
- (void)setCleanupDataBlock:;
+ (id)imageWithCGImage:scale:orientation:;
+ (id)imageWithUIImage:;
@end
