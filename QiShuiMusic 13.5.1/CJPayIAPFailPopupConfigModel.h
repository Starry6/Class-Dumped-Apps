@interface CJPayIAPFailPopupConfigModel : NSObject
@property (nonatomic) NSArray sk1Network;
@property (nonatomic) NSArray sk2Network;
@property (nonatomic) NSArray sk1Others;
@property (nonatomic) NSArray sk2Others;
@property (nonatomic) NSString linkChatUrl;
@property (nonatomic) NSString contentNetwork;
@property (nonatomic) NSString contentOthers;
@property (nonatomic) NSString titleNetwork;
@property (nonatomic) NSString titleOthers;
@property (nonatomic) double startTime;
@property (nonatomic) NSInteger merchantFrequency;
@property (nonatomic) NSInteger orderFrequency;
- (void)setLinkChatUrl:;
- (void)setTitleOthers:;
- (id)contentNetwork;
- (id)contentOthers;
- (id)linkChatUrl;
- (int)merchantFrequency;
- (int)orderFrequency;
- (void)setContentNetwork:;
- (void)setContentOthers:;
- (void)setMerchantFrequency:;
- (void)setOrderFrequency:;
- (void)setSk1Network:;
- (void)setSk1Others:;
- (void)setSk2Network:;
- (void)setSk2Others:;
- (void)setTitleNetwork:;
- (id)sk1Network;
- (id)sk1Others;
- (id)sk2Network;
- (id)sk2Others;
- (id)titleNetwork;
- (id)titleOthers;
- (void)setStartTime:;
- (double)startTime;
- (void).cxx_destruct;
@end
