@interface IESLiveLinkmicSyncDataServiceImpl : NSObject
@property (nonatomic) NSNumber roomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (BOOL)enableAPIDataSync;
- (BOOL)enableDataSync;
- (void)fetchLinkmicSyncData:completion:;
- (void)registerMessageProcesser;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
