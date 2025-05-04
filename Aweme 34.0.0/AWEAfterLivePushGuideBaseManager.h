@interface AWEAfterLivePushGuideBaseManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pushGuideScene;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
+ (id)sharedInstance;
@end
