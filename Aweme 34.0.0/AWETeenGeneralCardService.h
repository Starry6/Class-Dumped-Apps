@interface AWETeenGeneralCardService : NSObject
@property (nonatomic) NSMutableDictionary cardDict;
- (void)setCardDict:;
- (id)cardDict;
- (void).cxx_destruct;
+ (void)registerCardClass:cardType:;
+ (id)cardWithModel:forceClass:;
+ (void)unregisterCardClass:cardType:;
+ (BOOL)registeredCardType:;
+ (id)cardWithModel:;
+ (id)sharedInstance;
@end
