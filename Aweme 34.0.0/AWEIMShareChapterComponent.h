@interface AWEIMShareChapterComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMChapterShareMessageViewModel cellViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) q scene;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)cellViewModel;
- (void)cellWillDisplay:;
- (void)setCellViewModel:;
- (id)chapterShareMessage;
- (void)p_updateProps;
- (void)onClickSharedChapter;
- (void)trackChapterMessageShow;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
@end
