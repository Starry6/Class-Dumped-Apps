@interface AWEFavoriteFileAddOrCreateConfig : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL alwaysShowFavoritesPopup;
@property (nonatomic) NSString toastType;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL isFromCommentRedButton;
@property (nonatomic) BOOL shouldBlockNoticeView;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)toastType;
- (void)setToastType:;
- (BOOL)shouldBlockNoticeView;
- (void)setShouldBlockNoticeView:;
- (BOOL)isFromCommentRedButton;
- (BOOL)alwaysShowFavoritesPopup;
- (void)setAlwaysShowFavoritesPopup:;
- (void)setIsFromCommentRedButton:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
