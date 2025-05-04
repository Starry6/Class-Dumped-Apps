@interface AWESSUCImageModel : AWEBaseApiModel
@property (nonatomic) AWESSUCSizeModel size;
@property (nonatomic) AWESSUCImageURLModel imageURL;
- (id)imageURL;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setImageURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
