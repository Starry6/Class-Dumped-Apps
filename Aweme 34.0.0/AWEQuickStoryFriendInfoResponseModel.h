@interface AWEQuickStoryFriendInfoResponseModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel storyFriendInfo;
- (id)storyFriendInfo;
- (void)setStoryFriendInfo:;
- (void).cxx_destruct;
+ (id)storyFriendInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
