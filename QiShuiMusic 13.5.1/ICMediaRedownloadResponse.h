@interface ICMediaRedownloadResponse : NSObject
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) BOOL authorized;
@property (nonatomic) BOOL shouldCancelPurchaseBatch;
@property (nonatomic) ICStoreDialogResponse dialog;
@property (nonatomic) q status;
@property (nonatomic) I downloadQueueItemCount;
@property (nonatomic) NSString jingleAction;
@property (nonatomic) NSArray items;
@property (nonatomic) NSData subscriptionKeyBagData;
@property (nonatomic) NSError serverError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseDictionary;
- (id)items;
- (id)serverError;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)authorized;
- (id)dialog;
- (id)initWithResponseDictionary:requestDate:urlBag:;
- (BOOL)shouldCancelPurchaseBatch;
- (unsigned int)downloadQueueItemCount;
- (id)jingleAction;
- (id)subscriptionKeyBagData;
@end
