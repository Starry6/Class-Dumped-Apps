@interface IESLiveGiveGiftFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveGiveGiftStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendGift:count:;
- (void)componentCreate;
- (void)sendGift:count:params:extraTrack:successCallback:errorCallback:;
- (void)componentBindService;
- (id)createTransactionWithConfig:;
- (void)sendAsset:count:;
- (void)sendAsset:count:extraTrack:successCallback:errorCallback:;
- (void)sendGift:;
- (void)sendGift:count:extraTrack:;
- (void)sendGift:count:toUser:extraTrack:;
- (void)sendGift:count:toUser:params:extraTrack:successCallback:errorCallback:;
- (unsigned long long)sendPropSceneWithToUser:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)statistics;
- (id)store;
+ (BOOL)isMixed;
@end
