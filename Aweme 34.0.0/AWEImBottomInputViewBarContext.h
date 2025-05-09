@interface AWEImBottomInputViewBarContext : NSObject
@property (nonatomic) BOOL isDisplayIM_Image_Video;
@property (nonatomic) BOOL needHideIMInputBar;
@property (nonatomic) @? didChangeShowingStatusPublishDailyGuideCallback;
@property (nonatomic) BOOL isShowingPublishDailyGuide;
@property (nonatomic) @? didChangeShowingKeyboardStatusCallback;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL enterEcomLiveVideoHybrid;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) NSDictionary liteTaskInfo;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSDictionary businessDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (id)liteTaskInfo;
- (void)setLiteTaskInfo:;
- (id)businessDict;
- (void)setBusinessDict:;
- (void)setEnterEcomLiveVideoHybrid:;
- (BOOL)enterEcomLiveVideoHybrid;
- (void)setIsDisplayIM_Image_Video:;
- (void)setNeedHideIMInputBar:;
- (BOOL)isShowingPublishDailyGuide;
- (void)setIsShowingPublishDailyGuide:;
- (void)setDidChangeShowingStatusPublishDailyGuideCallback:;
- (void)setDidChangeShowingKeyboardStatusCallback:;
- (BOOL)isDisplayIM_Image_Video;
- (BOOL)needHideIMInputBar;
- (id)didChangeShowingStatusPublishDailyGuideCallback;
- (id)didChangeShowingKeyboardStatusCallback;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)previousPage;
- (void)setPreviousPage:;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:;
@end
