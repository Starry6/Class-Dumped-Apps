@interface AWEFeedArticleAnchorManager : NSObject
+ (BOOL)isToutiaoInstalled;
+ (BOOL)isToutiaoLiteInstalled;
+ (id)separateGroupIDFromSchema:;
+ (BOOL)anchorViewWillShowOnSuperview:referString:;
+ (BOOL)anchorViewClicked:referString:;
+ (BOOL)isMpArticleAnchor:;
+ (id)articleAnchorCommonTrackEventParams:referString:;
+ (id)extraParamsFromOpenURLString:;
+ (id)separateDiversionTypeFromSchema:;
@end
