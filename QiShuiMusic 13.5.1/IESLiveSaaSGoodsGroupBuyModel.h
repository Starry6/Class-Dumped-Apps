@interface IESLiveSaaSGoodsGroupBuyModel : BDDynamicMTLModel
@property (nonatomic) NSString prefixURL;
@property (nonatomic) NSArray avatars;
@property (nonatomic) NSNumber joinedSize;
@property (nonatomic) NSNumber groupSize;
@property (nonatomic) NSNumber percent;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) NSMutableArray iconsURLStrings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconsURLStrings;
- (id)contentTextsWithCampaign:;
- (void)setIconsURLStrings:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
