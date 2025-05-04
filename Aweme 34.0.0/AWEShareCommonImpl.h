@interface AWEShareCommonImpl : NSObject
- (id)showCommonPanelWithTask:onViewController:;
- (id)commonChannelWithType:withContext:;
- (id)commonURLTaskWithContext:imageURL:;
- (id)commonShareWithTask:withType:;
- (id)showCommonPanelWithTask:configurationHandler:onViewController:;
- (id)showCommonPanelWithConfiguration:onViewController:;
- (id)showCommonLandscapePanelWithConfiguration:onViewController:;
- (id)commonShareWithTask:toPlatform:;
- (id)showCommonLandscapePanelWithTask:configurationHandler:onViewController:;
- (id)showCommonTwoSectionPanelWithTask:onViewController:;
+ (id)commonImpl;
@end
