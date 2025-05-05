@interface IESLiveAudioMVBackgroundAdapter : NSObject
@property (nonatomic) @? firstRenderBlock;
@property (nonatomic) IESLiveAudioBackgroundBaseModel dataModel;
- (id)firstRenderBlock;
- (void)setFirstRenderBlock:;
- (void)updateMVBackground:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
