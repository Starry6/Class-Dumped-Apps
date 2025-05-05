@interface PIAManifestParser : NSObject
+ (id)combineInlineManifest:onlineManifest:;
+ (void)obtainPIAManifest:completion:;
@end
