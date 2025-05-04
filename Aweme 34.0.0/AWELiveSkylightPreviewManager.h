@interface AWELiveSkylightPreviewManager : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) Q style;
@property (nonatomic) <AWELiveUserAvatarPreviewProtocol> livePreview;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopPlay;
- (void)resetPlayerViewState;
- (id)livePreview;
- (void)setLivePreview:;
- (void)setUid:;
- (id)uid;
- (unsigned long long)style;
- (id)playerView;
- (void).cxx_destruct;
- (void)setStyle:;
@end
