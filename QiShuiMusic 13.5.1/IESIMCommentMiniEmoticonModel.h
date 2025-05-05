@interface IESIMCommentMiniEmoticonModel : NSObject
@property (nonatomic) NSString emoticonIcon;
@property (nonatomic) NSString emoticonTitle;
- (id)emoticonIcon;
- (id)emoticonTitle;
- (id)initWithEmoticonIcon:emoticonTitle:;
- (BOOL)isEqualToEmoticon:;
- (void)setEmoticonIcon:;
- (void)setEmoticonTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
