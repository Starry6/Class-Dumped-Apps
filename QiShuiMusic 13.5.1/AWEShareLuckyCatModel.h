@interface AWEShareLuckyCatModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString content;
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString originalURL;
@property (nonatomic) UIImage image;
- (id)shareURL;
- (id)content;
- (void)setContent:;
- (void)setText:;
- (void)setImage:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)text;
- (id)image;
- (id)imageURL;
- (id)originalURL;
- (void)setOriginalURL:;
- (void)setShareURL:;
@end
