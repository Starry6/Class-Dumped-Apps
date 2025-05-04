@interface AWEUGPasteboardServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getPasteboardContentWithSceneType:completion:;
- (void)pasteboardUsefulWithSceneType:;
- (void)clearPasteboard;
@end
