@interface AWESearchCachalotInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)customCachalotContext;
+ (void)registerGlobalPreCreateCardData;
+ (void)startGeneralSearchGlobalPreCreateCard;
+ (id)dictPreCreateCardGlobalConfig;
+ (id)nativePipeline;
+ (id)cachalotRegisterCardModelDict;
+ (id)cachalotRegisterCardViewDict;
+ (id)generalVideoCardClass;
+ (id)generalVideoCardImageClass;
+ (void)execute;
@end
