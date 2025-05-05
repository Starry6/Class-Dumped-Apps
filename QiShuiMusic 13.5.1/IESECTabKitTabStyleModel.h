@interface IESECTabKitTabStyleModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) IESECURLModel image;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) @? imageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setImage:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)image;
- (double)imageWidth;
- (id)imageHandler;
- (void)setImageHandler:;
- (double)imageHeight;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
