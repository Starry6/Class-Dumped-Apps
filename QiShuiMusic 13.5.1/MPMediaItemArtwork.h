@interface MPMediaItemArtwork : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} imageCropRect;
- (id)initWithImage:;
- (id)init;
- (void).cxx_destruct;
- (id)bounds;
- (id)initWithBoundsSize:requestHandler:;
- (id)imageWithSize:;
- (id)imageCropRect;
- (id)jpegDataWithSize:;
- (id)pngDataWithSize:;
@end
