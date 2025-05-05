@interface AWEChatListEmojiGreetSetting : MTLModel
@property (nonatomic) AWEIMGreetingEmoticonModel emoji;
@property (nonatomic) AWEIMGreetIconModel messageIcon;
@property (nonatomic) AWEIMGreetIconModel chatIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)chatIcon;
- (void)setChatIcon:;
- (void).cxx_destruct;
- (id)emoji;
- (void)setEmoji:;
- (id)messageIcon;
- (void)setMessageIcon:;
+ (id)chatIconJSONTransformer;
+ (id)emojiJSONTransformer;
+ (id)messageIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
