@interface IESECWinHeaderBFFModel : MTLModel
@property (nonatomic) IESECWinHeaderOtherInfoModel otherInfo;
@property (nonatomic) NSArray sections;
@property (nonatomic) IESECListKitListModel feed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOtherInfo:;
- (id)feed;
- (id)sections;
- (void)setFeed:;
- (void).cxx_destruct;
- (void)setSections:;
- (id)otherInfo;
+ (id)sectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
