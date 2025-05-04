@interface AWEPOIFeedUgcReplyUserInfoModel : MTLModel
@property (nonatomic) NSNumber userTagsHeight;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSDictionary clickEvent;
@property (nonatomic) NSArray originUserTags;
@property (nonatomic) NSArray userTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userTagsHeight;
- (double)userTagSpacing;
- (unsigned long long)userTagSplitType;
- (void)setUserTagsHeight:;
- (id)originUserTags;
- (void)setOriginUserTags:;
- (void)setClickEvent:;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (id)clickEvent;
- (id)avatar;
- (void)setAvatar:;
- (void)setUserTags:;
- (id)userTags;
+ (id)originUserTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
