@interface AWEUGSceneSwitchedNotifyImpl : HTSService
@property (nonatomic) <AWEUGSceneInquiryService> sceneInquiryDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)notifySceneDidAppeared:;
- (void)notifySceneDidDisappeared;
- (id)sceneInquiryDelegate;
- (void)setSceneInquiryDelegate:;
- (void).cxx_destruct;
@end
