@interface AWESearchMerchandiseCommentInfo : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray avatarList;
@property (nonatomic) q textSplitIndex;
- (id)avatarList;
- (void)setAvatarList:;
- (long long)textSplitIndex;
- (void)setTextSplitIndex:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
