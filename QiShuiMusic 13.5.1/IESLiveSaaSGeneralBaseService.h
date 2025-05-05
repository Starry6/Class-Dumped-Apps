@interface IESLiveSaaSGeneralBaseService : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (void)setComponentContext:;
- (void)setTrackContext:;
- (unsigned long long)supportType;
- (id)trackContext;
- (void)setUp;
- (void)orientationChanged:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
