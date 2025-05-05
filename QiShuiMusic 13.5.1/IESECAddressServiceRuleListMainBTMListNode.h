@interface IESECAddressServiceRuleListMainBTMListNode : MTLModel
@property (nonatomic) NSString btm;
@property (nonatomic) NSString desc;
@property (nonatomic) Q type;
@property (nonatomic) BOOL isMainPage;
@property (nonatomic) NSArray nextBtmList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btm;
- (void)setBtm:;
- (void)setNextBtmList:;
- (BOOL)isMainPage;
- (id)nextBtmList;
- (void)setIsMainPage:;
- (id)desc;
- (void)setDesc:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)nextBtmListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
