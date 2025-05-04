@interface AWELabelProfileItem : NSObject
@property (nonatomic) q userId;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel profilePic;
- (id)profilePic;
- (void)setProfilePic:;
- (long long)userId;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)nickName;
+ (id)profilePicImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
