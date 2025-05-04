@interface AWEIMEmoticonReplyViewModel : NSObject
@property (nonatomic) Q vmType;
@property (nonatomic) IESIMEmoticonModel emoticon;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString accessTitle;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString key;
- (unsigned long long)vmType;
- (void)setVmType:;
- (void)setEmoticon:;
- (id)emoticon;
- (id)accessTitle;
- (id)image;
- (void)setImage:;
- (id)icon;
- (id)key;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)recentMsgEmoticonList;
+ (void)markHeartEmojiHasPreposition;
+ (id)fullReplyEmoticonPanelListModel;
+ (BOOL)ifHeartEmojiHasPreposition;
+ (id)p_backupEmoticonList;
+ (id)p_heartEmojiPrepositionKey;
@end
