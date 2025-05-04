@interface AWEPOICommentVerifiedImageModel : NSObject
@property (nonatomic) UIImage commentImage;
@property (nonatomic) NSString commentImageUri;
@property (nonatomic) NSString commentImageURL;
@property (nonatomic) NSString commentImageBase64String;
@property (nonatomic) Q commentImageType;
- (void)setCommentImage:;
- (id)commentImage;
- (unsigned long long)commentImageType;
- (void)setCommentImageBase64String:;
- (void)setCommentImageType:;
- (void)setCommentImageUri:;
- (void)setCommentImageURL:;
- (id)commentImageUri;
- (id)commentImageURL;
- (id)commentImageBase64String;
- (void).cxx_destruct;
@end
