@interface IESECLiveViewPanelUtil : NSObject
@property (nonatomic) IESECLiveRoomContext roomContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRoomContext:;
- (unsigned long long)corners:;
- (id)iPadPanelSize;
- (BOOL)isiPadAutoRotateMode;
- (id)panelContainerView:;
- (id)panelContainerViewSize;
- (id)panelMaskSize:;
- (id)panelSize:;
- (id)panelSizeDefault:;
- (id)panelSizeHeightPercent;
- (void).cxx_destruct;
- (id)roomContext;
- (id)initWithRoomContext:;
@end
