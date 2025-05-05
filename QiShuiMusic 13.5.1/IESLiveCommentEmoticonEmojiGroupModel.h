@interface IESLiveCommentEmoticonEmojiGroupModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString emoticonName;
@property (nonatomic) HTSLiveImage emoticonTag;
@property (nonatomic) NSMutableArray emoticonModels;
- (void)setEmoticonTag:;
- (id)emoticonModels;
- (id)emoticonName;
- (id)emoticonTag;
- (void)setEmoticonModels:;
- (void)setEmoticonName:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
@end
