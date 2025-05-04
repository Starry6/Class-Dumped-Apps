@interface AWEIMEmoticonAudioEmojiCollectionViewCell : AWEIMEmoticonImageCollectionViewCell
@property (nonatomic) AWEIMAudioAnimationView audioView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioView;
- (void)setAudioView:;
- (void)createComponent;
- (void)layoutComponent;
- (void)audioEmojiPlayer:statusDidChangeFrom:toStaus:;
- (void)renderUIWithViewModel:;
- (void).cxx_destruct;
@end
