@interface AWEHotSearchCommentAdditionalInfo : AWEBaseApiModel
@property (nonatomic) NSString billboardHeader;
@property (nonatomic) NSString hotSpotDesc;
@property (nonatomic) NSString hotListParam;
@property (nonatomic) NSDictionary userIdentities;
@property (nonatomic) NSDictionary userVoteTags;
@property (nonatomic) NSNumber discussingPV;
- (id)hotSpotDesc;
- (id)discussingPV;
- (void)setDiscussingPV:;
- (void)setUserVoteTags:;
- (void)setHotSpotDesc:;
- (id)userVoteTags;
- (id)hotListParam;
- (void)setHotListParam:;
- (id)billboardHeader;
- (void)setBillboardHeader:;
- (void)setUserIdentities:;
- (id)userIdentities;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
