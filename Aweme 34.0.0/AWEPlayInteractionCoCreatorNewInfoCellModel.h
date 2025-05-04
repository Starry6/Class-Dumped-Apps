@interface AWEPlayInteractionCoCreatorNewInfoCellModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray imageUrls;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) BOOL showFollowStatus;
@property (nonatomic) q followStatus;
@property (nonatomic) NSString name;
@property (nonatomic) NSString tagName;
@property (nonatomic) AWECoCreatorLiveModel liveModel;
- (long long)followStatus;
- (void)setFollowStatus:;
- (BOOL)showFollowStatus;
- (void)setShowFollowStatus:;
- (id)liveModel;
- (void)setLiveModel:;
- (id)imageUrls;
- (void)setImageUrls:;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (void)setName:;
- (id)name;
- (id)tagName;
- (void)setTagName:;
@end
