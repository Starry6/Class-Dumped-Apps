@interface IESLiveGroupLiveAPIImpl : HTSLiveApi
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchGroupLiveListWithRoomModel:completion:;
- (void)getGroupLiveContainerRequest:completionBlock:;
@end
