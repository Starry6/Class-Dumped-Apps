@interface IESLivePublicScreenASRMsgItem : NSObject
@property (nonatomic) q msgId;
@property (nonatomic) NSString msgType;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString userNickName;
@property (nonatomic) double fetchTimeStamp;
@property (nonatomic) double displayTimeStamp;
- (double)displayTimeStamp;
- (double)fetchTimeStamp;
- (void)setDisplayTimeStamp:;
- (void)setFetchTimeStamp:;
- (void)setUserNickName:;
- (id)userNickName;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (long long)msgId;
- (void)setMsgId:;
- (id)msgType;
- (void)setMsgType:;
@end
