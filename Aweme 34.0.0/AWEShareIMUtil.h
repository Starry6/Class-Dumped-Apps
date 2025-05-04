@interface AWEShareIMUtil : NSObject
+ (id)getDisplayNameWith:maxLength:maxHeight:displayName:;
+ (id)putNormalShareModelAtTheTopWithShareList:;
+ (BOOL)isSuccessOrSelfSeeWhenPostIM;
+ (void)shareToUserWithCrateGroup:shareContext:selectUsers:text:completion:;
+ (void)shareToUserWithContext:shareUsers:text:isGroupShare:completion:;
+ (void)finishShareVideoForActivityWithUsers:;
@end
