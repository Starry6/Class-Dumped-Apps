@interface IESLiveMIFullLinkChatDisplayDataModel : NSObject
@property (nonatomic) q chatSendCount;
@property (nonatomic) q chatSendSuccessCount;
@property (nonatomic) q chatDisplayCount;
@property (nonatomic) double chatTimeFromSendToSucceed;
@property (nonatomic) double chatTimeFromSendToDisplay;
- (long long)chatDisplayCount;
- (long long)chatSendCount;
- (long long)chatSendSuccessCount;
- (double)chatTimeFromSendToDisplay;
- (double)chatTimeFromSendToSucceed;
- (void)setChatDisplayCount:;
- (void)setChatSendCount:;
- (void)setChatSendSuccessCount:;
- (void)setChatTimeFromSendToDisplay:;
- (void)setChatTimeFromSendToSucceed:;
@end
