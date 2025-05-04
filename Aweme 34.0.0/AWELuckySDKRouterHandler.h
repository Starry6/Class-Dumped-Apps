@interface AWELuckySDKRouterHandler : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)canOpenURLString:;
+ (BOOL)openURLString:;
+ (BOOL)isLuckyCatURL:;
+ (BOOL)openLuckyCatURL:;
@end
