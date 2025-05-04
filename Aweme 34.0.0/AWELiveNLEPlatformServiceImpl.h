@interface AWELiveNLEPlatformServiceImpl : NSObject
@property (nonatomic) UIView emojiCreateView;
@property (nonatomic) NLEInterface_OC nleInterface;
@property (nonatomic) NLESegmentComposerFilter_OC composerSegment;
@property (nonatomic) NLETrack_OC effectTrack;
@property (nonatomic) NSDictionary imageInfoDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)nleInterface;
- (void)messageCenter:didReceiveMessage:;
- (void)setNleInterface:;
- (id)effectTrack;
- (void)setEffectTrack:;
- (void)setEmojiCreateView:;
- (id)emojiCreateView;
- (long long)p_colorToInteger:;
- (void)setComposerSegment:;
- (id)composerSegment;
- (void)setImageInfoDic:;
- (id)imageInfoDic;
- (void)creatNleInterfaceWithView:imagePath:effectFilePath:typeId:;
- (void)makeNleModelWithImagePath:typeId:content:;
- (void)getSourcePreviewImageWithCompletion:;
- (void)removeInterfaceObjects;
- (void).cxx_destruct;
@end
