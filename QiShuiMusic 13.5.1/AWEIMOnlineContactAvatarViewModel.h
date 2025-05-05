@interface AWEIMOnlineContactAvatarViewModel : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q vmType;
@property (nonatomic) AWEIMFriendInfoDataModel friendInfoModel;
@property (nonatomic) AWEIMFriendPromotInfoDataModel promotInfoModel;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
- (id)friendInfoModel;
- (id)promotInfoModel;
- (void)setFriendInfoModel:;
- (void)setPromotInfoModel:;
- (void)setVmType:;
- (unsigned long long)vmType;
- (id)identifier;
- (void)setImage:;
- (void)setTitle:;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)image;
+ (id)viewModelWithIdentifier:;
@end
