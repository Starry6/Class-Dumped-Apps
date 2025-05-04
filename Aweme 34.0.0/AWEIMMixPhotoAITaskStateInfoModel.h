@interface AWEIMMixPhotoAITaskStateInfoModel : NSObject
@property (nonatomic) UIImage topImage;
@property (nonatomic) UIImage leadingImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL showTopDefaultTopImage;
@property (nonatomic) BOOL showDefaultLeadingImage;
- (void)setShowDefaultLeadingImage:;
- (void)setShowTopDefaultTopImage:;
- (BOOL)showDefaultLeadingImage;
- (BOOL)showTopDefaultTopImage;
- (id)subtitle;
- (id)leadingImage;
- (void)setSubtitle:;
- (void)setLeadingImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTopImage:;
- (id)topImage;
@end
