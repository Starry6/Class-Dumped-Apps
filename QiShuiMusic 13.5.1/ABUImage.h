@interface ABUImage : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float scale;
- (id)init;
- (void)setScale:;
- (BOOL)isMemberOfClass:;
- (void)setWidth:;
- (void)setImage:;
- (float)height;
- (float)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (float)scale;
- (void)setImageURL:;
- (id)image;
- (id)imageURL;
@end
