@interface AWELifeFeedsUserInfo : AWEBaseApiModel
@property (nonatomic) AWELifeFeedsAuthorInfo authorInfo;
@property (nonatomic) AWELifeFeedsDiggInfo diggInfo;
- (id)authorInfo;
- (void)setAuthorInfo:;
- (id)diggInfo;
- (void)setDiggInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
