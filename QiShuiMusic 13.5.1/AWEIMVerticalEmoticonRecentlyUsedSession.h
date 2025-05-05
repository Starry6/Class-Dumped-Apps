@interface AWEIMVerticalEmoticonRecentlyUsedSession : NSObject
@property (nonatomic) IESIMSaaSEmoticonThemeModel themeModel;
@property (nonatomic) q sessionType;
@property (nonatomic) q scene;
@property (nonatomic) NSMutableArray viewModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configViewModelsWithEmoticons:;
- (id)mapCellClassToViewModel;
- (void)setThemeModel:;
- (id)themeModel;
- (long long)sessionType;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
- (void)setSessionType:;
- (id)viewModels;
- (void)setViewModels:;
@end
