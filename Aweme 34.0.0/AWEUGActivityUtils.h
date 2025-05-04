@interface AWEUGActivityUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)activityAvoidGlobal;
+ (id)currentDateStr;
+ (BOOL)shouldHideOpenCardsAlertForAweme:;
+ (BOOL)checkCurrentFeedIsAD;
+ (BOOL)checkIfHasAD:;
+ (BOOL)currentFeedTabCanShowAlert;
+ (id)currentDateFormatStr;
@end
