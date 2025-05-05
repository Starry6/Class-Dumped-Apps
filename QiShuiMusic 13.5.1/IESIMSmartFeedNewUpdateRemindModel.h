@interface IESIMSmartFeedNewUpdateRemindModel : IESIMBaseApiModel
@property (nonatomic) NSString remindText;
@property (nonatomic) NSString authorName;
@property (nonatomic) IESIMURLModel avatarThumb;
- (void)setAvatarThumb:;
- (id)avatarThumb;
- (id)remindText;
- (void)setRemindText:;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
