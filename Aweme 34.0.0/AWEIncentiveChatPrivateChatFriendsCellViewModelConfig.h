@interface AWEIncentiveChatPrivateChatFriendsCellViewModelConfig : NSObject
@property (nonatomic) AWEIMUser user;
@property (nonatomic) Q cellOrder;
@property (nonatomic) AWEIMIncentiveChatBagTask bagTask;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary trackDict;
- (void)setEnterFrom:;
- (id)enterFrom;
- (unsigned long long)cellOrder;
- (void)setTrackDict:;
- (id)trackDict;
- (void)setCellOrder:;
- (void)setBagTask:;
- (id)bagTask;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
@end
