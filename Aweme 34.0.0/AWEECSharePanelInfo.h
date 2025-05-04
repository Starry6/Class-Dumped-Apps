@interface AWEECSharePanelInfo : MTLModel
@property (nonatomic) BOOL invalidShareInfo;
@property (nonatomic) AWEECShareInvalidDeal invalidDeal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)invalidShareInfo;
- (void)setInvalidShareInfo:;
- (id)invalidDeal;
- (void)setInvalidDeal:;
- (void).cxx_destruct;
+ (id)invalidDealJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
