@interface ICMusicSubscriptionPlaybackResponse : NSObject
@property (nonatomic) NSData leaseInfoData;
@property (nonatomic) NSData subscriptionKeyBagData;
@property (nonatomic) NSDate leaseExpirationDate;
@property (nonatomic) ICStoreDialogResponse dialog;
@property (nonatomic) NSString householdID;
@property (nonatomic) NSArray items;
@property (nonatomic) NSError serverError;
@property (nonatomic) NSDictionary metricsDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)metricsDictionary;
- (id)items;
- (id)serverError;
- (void).cxx_destruct;
- (id)dialog;
- (id)initWithResponseDictionary:requestDate:urlBag:;
- (id)subscriptionKeyBagData;
- (id)householdID;
- (id)leaseExpirationDate;
- (id)itemWithStoreAdamID:;
- (id)leaseInfoData;
@end
