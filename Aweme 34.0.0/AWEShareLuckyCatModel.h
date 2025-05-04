@interface AWEShareLuckyCatModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString content;
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString originalURL;
@property (nonatomic) UIImage image;
- (id)content;
- (id)image;
- (id)shareURL;
- (void)setImage:;
- (void)setText:;
- (id)text;
- (void)setContent:;
- (id)imageURL;
- (void).cxx_destruct;
- (id)title;
- (void)setImageURL:;
- (void)setTitle:;
- (id)originalURL;
- (void)setOriginalURL:;
- (void)setShareURL:;
@end
