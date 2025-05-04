@interface AWEUserRecommendFindFriendsDotManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageWithView:;
- (void)updateNumericalDotIfNeeded:count:completion:;
- (void)recordDotClicked;
+ (BOOL)enableShowNumericalDot;
+ (id)lastShownDate;
+ (id)uidKey:;
+ (long long)totalImpressionDaysWithoutInteraction;
+ (id)lastClickDate;
+ (void)recordImpressionDate;
+ (void)clearImpressionDaysWithoutInteraction;
+ (id)sharedManager;
@end
