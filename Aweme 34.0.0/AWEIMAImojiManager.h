@interface AWEIMAImojiManager : NSObject
@property (nonatomic) NSArray styleList;
@property (nonatomic) AWEIMEmoticonInfoModel styleInfoModel;
@property (nonatomic) AWEIMEmoticonThemeModel styleThemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)setStyleList:;
- (void)strategyConfigUpdate;
- (id)artModelWithArtID:;
- (id)styleThemeModel;
- (id)styleInfoModel;
- (void)setStyleThemeModel:;
- (void)setStyleInfoModel:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)styleList;
+ (id)resolveStyleList;
+ (id)reformatStyleModelArray:;
+ (id)sharedInstance;
@end
