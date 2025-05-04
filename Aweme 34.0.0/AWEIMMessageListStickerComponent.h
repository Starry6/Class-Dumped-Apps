@interface AWEIMMessageListStickerComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMCustomGiphyUploadHandler giphyUploadHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)addCurrentStickerAtCell:;
- (void)addStickerWithGiphyMessage:trackInfos:;
- (void)p_addStickerWithGiphyMessage:trackInfos:;
- (void)p_addStickerWithShanMengMessage:trackInfos:;
- (void)setGiphyUploadHandler:;
- (id)giphyUploadHandler;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
+ (id)lazyComponentWakeupInterface;
@end
