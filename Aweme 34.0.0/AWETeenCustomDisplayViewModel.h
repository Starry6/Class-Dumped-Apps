@interface AWETeenCustomDisplayViewModel : NSObject
@property (nonatomic) AWEAwemeModel aweModel;
@property (nonatomic) q indexPath;
@property (nonatomic) <AWETeenCustomDisplayViewControllerDelegate> feedContainerDelegate;
@property (nonatomic) q vcType;
@property (nonatomic) NSString albumEnterFrom;
@property (nonatomic) AWETeenExtraParamModel extraParam;
@property (nonatomic) NSNumber slideType;
@property (nonatomic) @? didChangePlayBackAction;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) BOOL isPreloadingEnabled;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double startPlayTime;
@property (nonatomic) NSString startPlayToast;
@property (nonatomic) NSString resultID;
@property (nonatomic) NSString entranceSource;
@property (nonatomic) AWETeenFeedPageContext feedPageContext;
- (id)slideType;
- (void)setSlideType:;
- (id)feedPageContext;
- (void)setFeedPageContext:;
- (long long)vcType;
- (void)setStartPlayTime:;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:;
- (void)setVcType:;
- (double)startPlayTime;
- (id)extraParam;
- (void)setExtraParam:;
- (id)aweModel;
- (void)setAweModel:;
- (id)didChangePlayBackAction;
- (void)setDidChangePlayBackAction:;
- (BOOL)isLastCell;
- (void)setIsLastCell:;
- (id)albumEnterFrom;
- (void)setAlbumEnterFrom:;
- (void)setStartPlayToast:;
- (id)feedContainerDelegate;
- (void)setFeedContainerDelegate:;
- (id)startPlayToast;
- (id)entranceSource;
- (void)setEntranceSource:;
- (long long)indexPath;
- (double)bottomMargin;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (void)setBottomMargin:;
- (id)resultID;
- (void)setResultID:;
- (BOOL)isPreloadingEnabled;
- (void)setIsPreloadingEnabled:;
@end
