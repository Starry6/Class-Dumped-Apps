@interface AWEShareAwemeInfoModel : NSObject
@property (nonatomic) AWEUserModel author;
@property (nonatomic) AWEUserModel originalAuthor;
@property (nonatomic) AWEAwemeModel fromAweme;
@property (nonatomic) BOOL awemeIsLongItem;
@property (nonatomic) BOOL isFirstLandscape;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (nonatomic) NSString momentType;
@property (nonatomic) BOOL authorIsPrivateAccount;
- (void)setMomentType:;
- (id)momentType;
- (BOOL)authorIsCurrentUser;
- (BOOL)authorIsPrivateAccount;
- (void)setFromAweme:;
- (id)fromAweme;
- (void)setAwemeIsLongItem:;
- (BOOL)awemeIsLongItem;
- (void)setAuthorIsCurrentUser:;
- (id)originalAuthor;
- (void)setOriginalAuthor:;
- (void)setAuthorIsPrivateAccount:;
- (BOOL)isFirstLandscape;
- (void)setIsFirstLandscape:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
@end
