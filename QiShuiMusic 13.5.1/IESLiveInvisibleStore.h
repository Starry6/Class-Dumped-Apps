@interface IESLiveInvisibleStore : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanInvisiblePrivilegeEnterRoomToast;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:componentContext:trackContext:;
- (id)invisiblePrivilegeEnterRoomToast;
- (void)registerInvisiblePrivilegeEnterRoomToast:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
@end
