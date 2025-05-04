@interface AWEInTodayPrivatePostImageModel : NSObject
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) NSArray imageUrlList;
@property (nonatomic) UIImage image;
- (id)imageUrlList;
- (void)setImageUrlList:;
- (void)fetchCoverImage:;
- (id)image;
- (void)setImage:;
- (id)localIdentifier;
- (void).cxx_destruct;
- (id)imageSize;
- (void)setLocalIdentifier:;
+ (id)createModelsWithAwemeModel:;
+ (id)createModelWithLocalIdentifier:;
@end
