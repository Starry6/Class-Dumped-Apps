@interface IESLiveBigPartyGuestInfoViewConfig : NSObject
@property (nonatomic) BOOL isPreview;
@property (nonatomic) <IESLiveInteractionLayoutCanvasElement> element;
@property (nonatomic) IESLiveInteractionLayout layout;
@property (nonatomic) BOOL isAnchor;
- (void)setIsAnchor:;
- (id)element;
- (void)setLayout:;
- (BOOL)isPreview;
- (BOOL)isAnchor;
- (id)layout;
- (void).cxx_destruct;
- (void)setElement:;
- (void)setIsPreview:;
@end
