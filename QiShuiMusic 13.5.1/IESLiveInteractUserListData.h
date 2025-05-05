@interface IESLiveInteractUserListData : NSObject
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) NSMutableArray positionsArray;
@property (nonatomic) IESLiveLinkerBaseInfo linkerBaseInfo;
- (void)fixUserDataForWrds;
- (id)initWithListV2Response:;
- (id)initWithSyncData:;
- (id)linkedUsersArray;
- (id)linkerBaseInfo;
- (id)linkerContentMap;
- (id)lockedPositionsArray;
- (id)positionsArray;
- (void)setLinkedUsersArray:;
- (void)setLinkerBaseInfo:;
- (void)setLinkerContentMap:;
- (void)setLockedPositionsArray:;
- (void)setPositionsArray:;
- (void).cxx_destruct;
@end
