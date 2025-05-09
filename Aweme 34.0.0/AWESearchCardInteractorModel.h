@interface AWESearchCardInteractorModel : NSObject
@property (nonatomic) AWESearchCardDiggModel diggModel;
@property (nonatomic) AWESearchCardCommentModel commentModel;
@property (nonatomic) AWESearchCardFavorModel favorModel;
@property (nonatomic) AWESearchCardShareModel shareModel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString adEventName;
@property (nonatomic) double interactorWidth;
@property (nonatomic) double interactorHeight;
@property (nonatomic) BOOL hiddenDiggButton;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) q diggCount;
@property (nonatomic) NSDictionary diggInteractLogExtra;
@property (nonatomic) BOOL hiddenCommentButton;
@property (nonatomic) q commentCount;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) NSDictionary commentInteractLogExtra;
@property (nonatomic) NSDictionary commentLogExtra;
@property (nonatomic) BOOL hiddenFavorButton;
@property (nonatomic) q favorCount;
@property (nonatomic) BOOL userFavored;
@property (nonatomic) NSDictionary favorInteractLogExtra;
@property (nonatomic) BOOL hiddenShareButton;
@property (nonatomic) q shareCount;
@property (nonatomic) NSDictionary shareInteractLogExtra;
- (id)awemeModel;
- (long long)diggCount;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)adEventName;
- (void)setAdEventName:;
- (id)commentModel;
- (void)setCommentModel:;
- (BOOL)userDigged;
- (BOOL)disableComment;
- (void)setUserDigged:;
- (void)setDiggCount:;
- (id)diggModel;
- (id)commentLogExtra;
- (long long)favorCount;
- (void)setFavorCount:;
- (void)setDisableComment:;
- (void)setDiggModel:;
- (void)setInteractorWidth:;
- (double)interactorWidth;
- (double)interactorHeight;
- (void)setDiggInteractLogExtra:;
- (void)setCommentInteractLogExtra:;
- (void)setCommentLogExtra:;
- (void)setHiddenFavorButton:;
- (void)setUserFavored:;
- (void)setFavorInteractLogExtra:;
- (void)setShareInteractLogExtra:;
- (BOOL)userFavored;
- (id)favorModel;
- (void)configInteractorFrame;
- (BOOL)hiddenDiggButton;
- (BOOL)hiddenFavorButton;
- (BOOL)hiddenShareButton;
- (BOOL)hiddenCommentButton;
- (void)setInteractorHeight:;
- (void)setHiddenDiggButton:;
- (void)setHiddenCommentButton:;
- (void)setHiddenShareButton:;
- (id)diggInteractLogExtra;
- (id)commentInteractLogExtra;
- (id)favorInteractLogExtra;
- (id)shareInteractLogExtra;
- (void)setFavorModel:;
- (void)setGroupID:;
- (id)userID;
- (id)init;
- (id)groupID;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setShareCount:;
- (long long)shareCount;
- (long long)commentCount;
- (void)setCommentCount:;
- (void)setShareModel:;
- (id)shareModel;
@end
