@interface AWEMessageReachSideBarNoticeTempInfoModel : NSObject
@property (nonatomic) NSString tempId;
@property (nonatomic) q unmarkCnt;
@property (nonatomic) q lastNidTime;
@property (nonatomic) q tempStatus;
@property (nonatomic) NSArray msgList;
- (long long)tempStatus;
- (long long)lastNidTime;
- (id)msgList;
- (id)tempId;
- (long long)unmarkCnt;
- (void)setTempId:;
- (void)setUnmarkCnt:;
- (void)setLastNidTime:;
- (void)setTempStatus:;
- (void)setMsgList:;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithDictionary:;
+ (BOOL)validateTempInfoModel:;
@end
