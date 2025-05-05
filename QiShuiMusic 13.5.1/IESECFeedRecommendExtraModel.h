@interface IESECFeedRecommendExtraModel : MTLModel
@property (nonatomic) NSString recommendInfo;
@property (nonatomic) NSString resourceID;
@property (nonatomic) BOOL isFollowingOriginAuthor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFollowingOriginAuthor;
- (id)recommendInfo;
- (void)setIsFollowingOriginAuthor:;
- (void)setRecommendInfo:;
- (void)setResourceID:;
- (id)resourceID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
