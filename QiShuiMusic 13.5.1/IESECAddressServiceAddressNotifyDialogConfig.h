@interface IESECAddressServiceAddressNotifyDialogConfig : MTLModel
@property (nonatomic) q statPeriod;
@property (nonatomic) q maxTimes;
@property (nonatomic) q checkDistance;
@property (nonatomic) BOOL disableCheck;
@property (nonatomic) NSArray itemList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)checkDistance;
- (BOOL)disableCheck;
- (long long)maxTimes;
- (void)setCheckDistance:;
- (void)setDisableCheck:;
- (void)setMaxTimes:;
- (void)setStatPeriod:;
- (long long)statPeriod;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
