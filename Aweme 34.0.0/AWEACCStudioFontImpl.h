@interface AWEACCStudioFontImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerFonts;
- (void)downloadFontWithModel:completion:;
- (void)prefetchFontEffectsWithCompletion:;
- (id)fontWithModel:size:;
- (void)downloadFontWithModelWithHighPriority:completion:;
- (void)prefetchFontEffects;
- (id)handleWithFontEffects:;
- (void)forcePrefetchFontEffects;
- (id)fontFilePath:;
- (id)fontModelForName:;
@end
