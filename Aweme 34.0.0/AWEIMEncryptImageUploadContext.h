@interface AWEIMEncryptImageUploadContext : NSObject
@property (nonatomic) NSArray imageLocalPaths;
@property (nonatomic) UIImage image;
@property (nonatomic) NSDictionary trackExt;
- (id)trackExt;
- (void)setImageLocalPaths:;
- (void)setTrackExt:;
- (id)imageLocalPaths;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
@end
