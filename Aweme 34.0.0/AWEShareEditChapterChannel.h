@interface AWEShareEditChapterChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (id)makeItemWithStyle:inView:;
- (BOOL)isShareItemEnabled;
- (void)updateChapterStatus:;
- (BOOL)isChapterExisted;
- (BOOL)isChapterCheckFailed;
- (BOOL)isChapterProposal;
- (BOOL)isChapterChecking;
- (BOOL)isChapterGenerating;
- (void)trackWhenEditChapterIconDidClick;
- (void)trackEditChapterIconShown;
- (BOOL)isExpired;
- (BOOL)share;
- (id)init;
- (void)dealloc;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
