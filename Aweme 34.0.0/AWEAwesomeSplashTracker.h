@interface AWEAwesomeSplashTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackSplashFailWithType:model:;
+ (void)trackFirstView:;
+ (void)trackBidSplashFailWithReason:model:;
+ (id)splashAdSequence;
+ (void)trackSplashFailWithType:model:ttSplashModel:;
@end
