@interface AWECommentPublishImageModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString imageFilePath;
@property (nonatomic) NSArray imageUrlList;
@property (nonatomic) AWECommentImageSourceInfoModel imageSourceInfo;
@property (nonatomic) q mediaType;
@property (nonatomic) NSString imageSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageSourceInfo;
- (void)setImageSourceInfo:;
- (id)imageUrlList;
- (void)setImageUrlList:;
- (void)setMediaType:;
- (id)init;
- (id)image;
- (id)imageSource;
- (void)setImage:;
- (long long)mediaType;
- (void)setImageSource:;
- (void).cxx_destruct;
- (id)imageFilePath;
- (void)setImageFilePath:;
- (id)imageContent;
@end
