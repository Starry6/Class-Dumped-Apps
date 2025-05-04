@interface AWEFavoriteChainStartSnackBarConfig : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) Q snackBarType;
@property (nonatomic) NSString snackBarTitleString;
@property (nonatomic) NSDictionary extraParams;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (void)setCoverUrl:;
- (id)coverUrl;
- (unsigned long long)snackBarType;
- (void)setSnackBarType:;
- (id)snackBarTitleString;
- (void)setSnackBarTitleString:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
@end
