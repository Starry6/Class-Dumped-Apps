@interface IESLiveMultiLinkerRTCInfoUserModel : NSObject
@property (nonatomic) BOOL isAdvancePushStream;
@property (nonatomic) BOOL isBusinessPrepare;
@property (nonatomic) BOOL didUpdate;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString mixUID;
- (BOOL)isAdvancePushStream;
- (BOOL)isBusinessPrepare;
- (id)mixUID;
- (void)setIsAdvancePushStream:;
- (void)setIsBusinessPrepare:;
- (void)setMixUID:;
- (BOOL)didUpdate;
- (void).cxx_destruct;
- (void)setDidUpdate:;
- (id)roomID;
- (void)setRoomID:;
@end
