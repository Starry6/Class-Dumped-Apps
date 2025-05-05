@interface IESECLiveAPIBaseRequest : NSObject
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString authorID;
@property (nonatomic) q sceneType;
@property (nonatomic) NSString apiPath;
@property (nonatomic) BOOL optEntranceInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiPath;
- (BOOL)optEntranceInfo;
- (id)buildParams;
- (void)setApiPath:;
- (void)setOptEntranceInfo:;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:;
- (id)roomID;
- (void)setRoomID:;
- (id)authorID;
- (void)setAuthorID:;
@end
