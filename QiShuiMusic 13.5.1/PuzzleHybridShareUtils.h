@interface PuzzleHybridShareUtils : NSObject
+ (void)getShareInfoOfWebView:complete:;
+ (void)shareWithHybridView:context:;
+ (void)shareWithShareInfo:context:;
+ (void)shareWithTargetURL:title:content:imageURL:context:;
+ (BOOL)supportNativeShareInfo:;
@end
