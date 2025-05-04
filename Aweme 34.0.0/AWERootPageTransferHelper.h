@interface AWERootPageTransferHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)switchToRootPage:withParams:;
+ (void)landingFamiliar;
+ (long long)currentFeedVCType;
+ (BOOL)isSwitchToRootPageNeeded:;
@end
