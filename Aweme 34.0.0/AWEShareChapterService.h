@interface AWEShareChapterService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showPanelWithAwemeModel:chapterIndex:subTitle:enterFrom:sceneType:onViewController:;
- (id)shareConfigurationHandlerWithAwemeModel:chapterIndex:subTitle:enterFrom:sceneType:;
@end
