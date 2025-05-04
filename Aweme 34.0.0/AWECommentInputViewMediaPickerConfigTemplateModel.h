@interface AWECommentInputViewMediaPickerConfigTemplateModel : NSObject
@property (nonatomic) BOOL enableMixTab;
@property (nonatomic) BOOL enableMultiImage;
@property (nonatomic) BOOL enableVideo;
@property (nonatomic) BOOL enableLiveImage;
- (void)setEnableVideo:;
- (BOOL)enableVideo;
- (BOOL)enableMixTab;
- (BOOL)enableLiveImage;
- (BOOL)enableMultiImage;
- (void)setEnableMixTab:;
- (void)setEnableMultiImage:;
- (void)setEnableLiveImage:;
@end
