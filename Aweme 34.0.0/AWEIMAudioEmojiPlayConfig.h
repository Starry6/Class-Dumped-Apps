@interface AWEIMAudioEmojiPlayConfig : NSObject
@property (nonatomic) AWEIMEmoticonModel emoticon;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString msgID;
@property (nonatomic) Q playMethod;
- (id)msgID;
- (void)setMsgID:;
- (id)convID;
- (void)setConvID:;
- (void)setEmoticon:;
- (id)emoticon;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)playMethod;
- (void)setPlayMethod:;
@end
