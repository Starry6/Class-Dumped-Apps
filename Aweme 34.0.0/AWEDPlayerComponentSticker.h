@interface AWEDPlayerComponentSticker : AWEDPlayerBaseComponent
@property (nonatomic) MediaDecrypter decrypter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playerDidReadyForDisplay:;
- (id)getVideoInformation:;
- (void)applyStickerInfo:;
- (double)videoCurrentPlayBackTime;
- (BOOL)enableInfoCheckBeforeTap:;
- (void)applyStickerInfoIfNeeded:;
- (id)decrypter;
- (void)dealloc;
- (void)setDecrypter:;
- (void).cxx_destruct;
@end
