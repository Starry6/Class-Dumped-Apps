@interface IESArtistStcikerListRequestModel : IESArtistStcikerCommonRequestModel
@property (nonatomic) q categoryId;
@property (nonatomic) NSString creationId;
@property (nonatomic) NSString imageUri;
@property (nonatomic) q source;
- (id)creationId;
- (id)imageUri;
- (void)setCreationId:;
- (void)setImageUri:;
- (void).cxx_destruct;
- (long long)source;
- (void)setSource:;
- (long long)categoryId;
- (void)setCategoryId:;
@end
