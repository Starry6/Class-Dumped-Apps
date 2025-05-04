@interface AWEPlayInteractionLifeCardImageController : AWEPlayInteractionBaseController
@property (nonatomic) NSArray albumImages;
@property (nonatomic) NSMutableDictionary imageShowDic;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
- (id)albumImages;
- (double)getLeftElementHeight;
- (double)getBottomElementHeight;
- (void)setAlbumImages:;
- (BOOL)isRichAwemeManuallySlide:;
- (void)bindLynxMessage;
- (id)imageShowDic;
- (id)getMethodSourceStr:index:;
- (void)setImageShowDic:;
- (id)subscriber;
- (void)setSubscriber:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)willDisplay;
@end
