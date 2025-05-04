@interface AWEHPSearchCaptionMsgManager : NSObject
@property (nonatomic) AWECaptionInfoModel latestCaptionMsg;
- (void)registerCaptionMsgSync;
- (int)captionMsgBusinessID;
- (void)handleNewMsg:;
- (id)latestCaptionMsg;
- (void)setLatestCaptionMsg:;
- (void)clearMsg:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
