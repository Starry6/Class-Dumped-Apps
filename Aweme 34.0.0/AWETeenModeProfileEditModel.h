@interface AWETeenModeProfileEditModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detail;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSArray avatarURL;
@property (nonatomic) NSString avatarURI;
@property (nonatomic) @? cellTappedBlock;
@property (nonatomic) @? cellRefreshBlock;
- (void)setCellTappedBlock:;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)cellTappedBlock;
- (void)refreshCell;
- (void)setCellRefreshBlock:;
- (id)cellRefreshBlock;
- (id)avatarURI;
- (void)setAvatarURI:;
- (void)setDetail:;
- (long long)type;
- (void)setType:;
- (id)detail;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setAvatarImage:;
- (id)avatarImage;
@end
