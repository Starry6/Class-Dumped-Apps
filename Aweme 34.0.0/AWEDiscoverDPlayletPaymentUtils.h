@interface AWEDiscoverDPlayletPaymentUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldShowMixPaymentFeedCard:;
+ (BOOL)shouldShowPlayletPaymentFeedCard:;
+ (void)updateOriginDataSource:withModels:completeBlock:;
+ (id)needSyncFilteredDataSourcePage;
@end
