@interface AWEGreyStyleTool : NSObject
+ (BOOL)greystyleEnable;
+ (BOOL)isTimeInvalid;
+ (BOOL)needGrayStyleWithClass:andIndentifier:;
+ (void)setGreyStyleInLayer:withIndentifier:;
+ (void)setGreyStyeInLayer:withParamas:;
+ (void)updateGreyModeConfig;
+ (void)setGreyStyleInViewController:;
+ (void)setGreyStyleInView:;
+ (void)resetGreyStyleInLayer:withIndentifier:;
@end
