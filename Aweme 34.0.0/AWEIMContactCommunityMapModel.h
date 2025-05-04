@interface AWEIMContactCommunityMapModel : MTLModel
@property (nonatomic) Q communityType;
@property (nonatomic) NSArray userIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserIDs:;
- (unsigned long long)communityType;
- (void)setCommunityType:;
- (void).cxx_destruct;
- (id)userIDs;
+ (id)communityTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
