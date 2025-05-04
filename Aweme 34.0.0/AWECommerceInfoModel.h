@interface AWECommerceInfoModel : MTLModel
@property (nonatomic) NSNumber offlineInfoType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString action;
@property (nonatomic) NSString linkType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)offlineInfoType;
- (void)setOfflineInfoType:;
- (id)linkType;
- (void)setText:;
- (id)text;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
- (void)setLinkType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
