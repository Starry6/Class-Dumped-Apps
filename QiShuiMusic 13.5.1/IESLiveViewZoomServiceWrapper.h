@interface IESLiveViewZoomServiceWrapper : NSObject
@property (nonatomic) <IESLiveViewZoomService> viewZoomService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)viewZoomService;
- (unsigned long long)currentViewZoomMode;
- (double)currentViewZoomScale;
- (id)initWithViewZoomService:;
- (void)setViewZoomService:;
- (BOOL)viewZoomModeOn;
- (void).cxx_destruct;
@end
