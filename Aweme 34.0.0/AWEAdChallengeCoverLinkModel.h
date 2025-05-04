@interface AWEAdChallengeCoverLinkModel : MTLModel
@property (nonatomic) NSNumber coverLinkType;
@property (nonatomic) NSString coverLinkSchema;
@property (nonatomic) AWEAdChallengeRoomModel roomData;
@property (nonatomic) AWEAdChallengeShopModel shopData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomData;
- (void)setRoomData:;
- (id)coverLinkType;
- (void)setCoverLinkType:;
- (id)coverLinkSchema;
- (void)setCoverLinkSchema:;
- (id)shopData;
- (void)setShopData:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
