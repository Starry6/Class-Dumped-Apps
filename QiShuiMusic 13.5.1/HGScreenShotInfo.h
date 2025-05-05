@interface HGScreenShotInfo : NSObject
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) * pixels;
@property (nonatomic) NSError error;
- (void)dealloc;
- (void)setError:;
- (void)setWidth:;
- (id)error;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (char *)pixels;
- (void)setPixels:;
@end
