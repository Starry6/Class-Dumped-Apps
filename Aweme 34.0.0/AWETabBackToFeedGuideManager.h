@interface AWETabBackToFeedGuideManager : NSObject
@property (nonatomic) NSMutableDictionary controllers;
@property (nonatomic) BOOL status;
@property (nonatomic) BOOL processing;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLandingParams:;
- (void)setLandingProcessing:;
- (void)setBackToFeedGuideStatus:;
- (void)addBackToFeedGuideController:forReferString:;
- (BOOL)showBackToFeedBubble:;
- (id)getLandingParams;
- (void)showTabJumpGuideViewWithBackToFeedConfig:completion:;
- (id)controllers;
- (void)setStatus:;
- (void).cxx_destruct;
- (BOOL)status;
- (id)params;
- (BOOL)processing;
- (void)setParams:;
- (void)setProcessing:;
- (void)setControllers:;
+ (id)sharedManager;
@end
