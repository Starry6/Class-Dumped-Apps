@interface DOMHTMLVideoElement : DOMHTMLMediaElement
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) I videoWidth;
@property (nonatomic) I videoHeight;
@property (nonatomic) NSString poster;
@property (nonatomic) BOOL playsInline;
@property (nonatomic) BOOL webkitSupportsFullscreen;
@property (nonatomic) BOOL webkitDisplayingFullscreen;
- (id)poster;
- (unsigned int)videoWidth;
- (void)setWidth:;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (void)setPoster:;
- (unsigned int)videoHeight;
- (void)webkitExitFullscreen;
- (BOOL)playsInline;
- (void)setPlaysInline:;
- (BOOL)webkitSupportsFullscreen;
- (BOOL)webkitDisplayingFullscreen;
- (void)webkitEnterFullscreen;
- (void)webkitEnterFullScreen;
- (void)webkitExitFullScreen;
@end
