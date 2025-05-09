@interface AWEShareCustomChannel : AWEShareBaseChannel
@property (nonatomic) NSString shareTitle;
@property (nonatomic) UIImage shareImage;
@property (nonatomic) NSDictionary shareImages;
@property (nonatomic) @? shareImageProvider;
@property (nonatomic) @? itemEventsHandler;
@property (nonatomic) @? shareHandler;
@property (nonatomic) @? asyncShareHandler;
@property (nonatomic) @? preparationHandler;
@property (nonatomic) @? asyncPreparationHandler;
- (void)shareWithCompletion:;
- (id)shareImage;
- (void)setShareTitle:;
- (void)setShareImage:;
- (id)makeItemWithStyle:inView:;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (void)prepareToShareWithCompletion:;
- (id)initWithType:category:;
- (id)shareImageProvider;
- (id)shareImages;
- (id)itemEventsHandler;
- (id)asyncPreparationHandler;
- (id)asyncShareHandler;
- (id)shareHandler;
- (void)setShareImages:;
- (void)setShareImageProvider:;
- (void)setItemEventsHandler:;
- (void)setShareHandler:;
- (void)setAsyncShareHandler:;
- (void)setAsyncPreparationHandler:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)preparationHandler;
- (void)setPreparationHandler:;
- (id)shareType;
- (id)shareTitle;
@end
