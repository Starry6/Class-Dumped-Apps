@interface AWEFeedCGDirectPlayCardUtil : NSObject
+ (id)settingConfig;
+ (BOOL)isSubscriptionCard:;
+ (id)cardNameFromCardInfo:;
+ (void)color:hsbFrom0To360:saturation:brightness:alpha:;
+ (id)colorFromHSBFrom0To360:saturation:brightness:alpha:;
+ (id)serverDataFromCardInfo:;
+ (id)getSnapshotForView:;
+ (void)landscapeColorPickingFromImage:async:completion:;
+ (void)portraitColorPickingFromImage:async:completion:;
+ (id)maskViewConfigFromCardInfo:;
+ (id)subscriptionSourceFromCardInfo:;
+ (id)traceIDFromCardInfo:;
+ (BOOL)subscriptionStatusFromCardInfo:;
+ (id)gameSchemaFromCardInfo:;
+ (id)unsubscribePanelURLWithBusinessID:imprID:cardInfo:;
+ (void)showToastOnView:withText:duration:;
+ (id)gameRenderSizeForLandscapeGame;
@end
