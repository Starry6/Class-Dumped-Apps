@interface AWESearchUser : MTLModel
@property (nonatomic) AWEDynamicPatchModel dynamicPatch;
@property (nonatomic) AWEUserModel userInfo;
@property (nonatomic) NSArray position;
@property (nonatomic) NSArray uniqidPosition;
@property (nonatomic) NSArray remarkPosition;
@property (nonatomic) NSArray stickersArray;
@property (nonatomic) NSArray OSTsArray;
@property (nonatomic) NSArray videosArray;
@property (nonatomic) NSArray mixVideoArray;
@property (nonatomic) AWESearchHotSpotAladdinModel hotSpotModel;
@property (nonatomic) AWEAwemeModel awemeForAd;
@property (nonatomic) AWEUserAccountCertInfoModel accountCertInfo;
@property (nonatomic) NSArray challenges;
@property (nonatomic) BOOL isRedPhoneNumber;
@property (nonatomic) NSString phoneNumberEncrypted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)hotSpotModel;
- (id)accountCertInfo;
- (id)dynamicPatch;
- (void)setAccountCertInfo:;
- (id)uniqidPosition;
- (void)setUniqidPosition:;
- (void)setDynamicPatch:;
- (void)setHotSpotModel:;
- (void)setRemarkPosition:;
- (void)setStickersArray:;
- (void)setOSTsArray:;
- (void)setVideosArray:;
- (id)remarkPosition;
- (id)stickersArray;
- (id)OSTsArray;
- (id)videosArray;
- (id)mixVideoArray;
- (void)setMixVideoArray:;
- (id)awemeForAd;
- (void)setAwemeForAd:;
- (BOOL)isRedPhoneNumber;
- (void)setIsRedPhoneNumber:;
- (id)phoneNumberEncrypted;
- (void)setPhoneNumberEncrypted:;
- (unsigned long long)hash;
- (id)position;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)setPosition:;
- (id)challenges;
- (void)setChallenges:;
+ (id)userInfoJSONTransformer;
+ (id)positionJSONTransformer;
+ (id)uniqidPositionJSONTransformer;
+ (id)dynamicPatchJSONTransformer;
+ (id)instanceWithUser:;
+ (id)accountCertInfoJSONTransformer;
+ (id)remarkPositionJSONTransformer;
+ (id)stickersArrayJSONTransformer;
+ (id)OSTsArrayJSONTransformer;
+ (id)videosArrayJSONTransformer;
+ (id)mixVideoArrayJSONTransformer;
+ (id)awemeForAdJSONTransformer;
+ (id)challengesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)hotSpotModelJSONTransformer;
@end
