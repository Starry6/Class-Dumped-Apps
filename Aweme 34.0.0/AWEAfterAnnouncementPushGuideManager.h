@interface AWEAfterAnnouncementPushGuideManager : NSObject
@property (nonatomic) NSDictionary originTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (void)showPitayaPushGuide:;
- (void)registerPushGuideByPitaya;
- (void)setOriginTrackParams:;
- (id)originTrackParams;
- (void)pushGuideShowSuccess:;
- (void)pushGuideActionConfirm:selectionType:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
