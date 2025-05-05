@interface IESLiveCubeFragment : IESLiveRoomComponent
@property (nonatomic) NSMapTable registrants;
@property (nonatomic) NSMutableArray controllers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)componentMount;
- (void)cubeComponentCreate;
- (id)objectWithProtocol:;
- (void)addController:;
- (id)controllers;
- (void).cxx_destruct;
- (void)useObject:forProtocol:;
- (id)registrants;
- (void)setRegistrants:;
- (void)setControllers:;
@end
