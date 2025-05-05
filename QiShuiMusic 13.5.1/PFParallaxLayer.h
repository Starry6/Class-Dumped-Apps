@interface PFParallaxLayer : NSObject
@property (nonatomic) ^{__CVBuffer=} image;
@property (nonatomic) {CGSize=dd} pixelSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) double zPosition;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isBackfill;
@property (nonatomic) BOOL isInactive;
@property (nonatomic) BOOL isDebug;
- (id)pixelSize;
- (BOOL)isBackground;
- (void)dealloc;
- (BOOL)isForeground;
- (id)identifier;
- (double)zPosition;
- (id)debugDescription;
- (id)frame;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isInactive;
- (id)image;
- (BOOL)isDebug;
- (id)initWithImage:frame:zPosition:identifier:;
- (BOOL)isBackfill;
+ (id)imageLayer:frame:zPosition:identifier:;
@end
