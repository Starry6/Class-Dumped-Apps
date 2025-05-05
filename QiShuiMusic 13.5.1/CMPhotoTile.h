@interface CMPhotoTile : NSObject
@property (nonatomic) ^{__IOSurface=} decodedSurface;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} imageRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentsRect;
@property (nonatomic) @ key;
@property (nonatomic) BOOL visible;
- (id)contentsRect;
- (BOOL)visible;
- (void)setVisible:;
- (void)dealloc;
- (id)key;
- (void)setKey:;
- (void)setContentsRect:;
- (id)description;
- (id)imageRect;
- (void)setImageRect:;
- (void)setDecodedSurface:;
- (id)decodedSurface;
@end
