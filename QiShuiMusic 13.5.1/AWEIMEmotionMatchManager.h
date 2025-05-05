@interface AWEIMEmotionMatchManager : NSObject
- (void)matchEmotionsWithKeywords:completion:;
+ (id)sharedInstance;
@end
