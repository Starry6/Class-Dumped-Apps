@interface AWEFavoriteChainStartAtAddToFildeConfig : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSArray itemIDArray;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) BOOL needShowSnackBar;
@property (nonatomic) BOOL needShowMask;
@property (nonatomic) NSDictionary extraParams;
- (void)setEnterFrom:;
- (void)setExtraParams:;
- (id)enterFrom;
- (id)extraParams;
- (void)setCoverUrl:;
- (id)coverUrl;
- (id)itemIDArray;
- (void)setItemIDArray:;
- (BOOL)needShowSnackBar;
- (void)setNeedShowSnackBar:;
- (BOOL)needShowMask;
- (void)setNeedShowMask:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
@end
