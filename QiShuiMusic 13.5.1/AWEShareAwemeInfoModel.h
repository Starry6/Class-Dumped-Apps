@interface AWEShareAwemeInfoModel : NSObject
@property (nonatomic) IESIMUserModel author;
@property (nonatomic) IESIMUserModel originalAuthor;
@property (nonatomic) IESIMAwemeModel fromAweme;
@property (nonatomic) BOOL awemeIsLongItem;
@property (nonatomic) BOOL isFirstLandscape;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (nonatomic) BOOL authorIsPrivateAccount;
- (BOOL)awemeIsLongItem;
- (BOOL)authorIsCurrentUser;
- (BOOL)authorIsPrivateAccount;
- (id)fromAweme;
- (BOOL)isFirstLandscape;
- (id)originalAuthor;
- (void)setAuthorIsCurrentUser:;
- (void)setAuthorIsPrivateAccount:;
- (void)setAwemeIsLongItem:;
- (void)setFromAweme:;
- (void)setIsFirstLandscape:;
- (void)setOriginalAuthor:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
@end
