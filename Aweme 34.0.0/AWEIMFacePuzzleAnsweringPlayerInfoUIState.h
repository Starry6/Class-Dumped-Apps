@interface AWEIMFacePuzzleAnsweringPlayerInfoUIState : NSObject
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSAttributedString title;
@property (nonatomic) NSAttributedString subTitle;
@property (nonatomic) NSAttributedString name;
@property (nonatomic) NSAttributedString desStr;
@property (nonatomic) @? backAction;
@property (nonatomic) BOOL hiddenLoading;
- (id)desStr;
- (void)setDesStr:;
- (BOOL)hiddenLoading;
- (void)setHiddenLoading:;
- (void)setBackAction:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setName:;
- (id)name;
- (id)backAction;
- (void)setTitle:;
- (void)setAvatarImage:;
- (id)avatarImage;
@end
