@interface HTSLiveAutoHideStore : NSObject
@property (nonatomic) BOOL isUserInteracting;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoomModel;
@property (nonatomic) <HTSLiveAutoHideReaction> reaction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (void)forceHide;
- (void)forceShow;
- (void)hideComponentsForPortrait;
- (id)initWithRoomModel:;
- (id)mixedRoomModel;
- (void)setIsUserInteracting:;
- (void)setMixedRoomModel:;
- (void)zoneClicked:;
- (BOOL)isUserInteracting;
- (void)setup;
- (void).cxx_destruct;
- (id)reaction;
- (void)setReaction:;
@end
