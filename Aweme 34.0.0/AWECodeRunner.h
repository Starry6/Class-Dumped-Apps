@interface AWECodeRunner : NSObject
+ (void)runCodeAtStage:;
+ (void)runCodeAtStage:machoHeader:;
+ (void)runCodeForDefaultStage;
+ (void)runCodeForWebview;
+ (void)runCodeForRN;
@end
