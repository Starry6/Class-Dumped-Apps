@interface AWERepoFlyBirdRecordModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString videoPath;
@property (nonatomic) <AWEStudioFlyBirdSelectionModel> selectionModel;
- (id)selectionModel;
- (void)setSelectionModel:;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setVideoPath:;
- (id)videoPath;
@end
