@interface AWEPadChannelServiceImp : NSObject
@property (nonatomic) NSArray iPadChannelReferArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createInterestViewControllerWithType:dataController:;
- (id)iPadChannelReferArray;
- (id)createSkyLightContainerViewControllerWithConfig:;
- (id)createStreamViewController;
- (BOOL)enableLightModeWithChannelModel:;
- (id)createPolymericChannelViewControllerWithChannelModel:;
- (BOOL)enableLightModeWithPageKey:;
- (id)createPadLongVidioFeedDataControllerWithPath:;
- (void)setIPadChannelReferArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
