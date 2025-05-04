@interface AWEECOMIMMsgFootDescConfig : NSObject
@property (nonatomic) BOOL enableNewFooter;
@property (nonatomic) NSArray whiteList;
@property (nonatomic) NSArray blackList;
@property (nonatomic) AWEECOMIMFootDescActionButtonStyle buttonStyle;
- (id)whiteList;
- (void)setWhiteList:;
- (id)blackList;
- (void)setBlackList:;
- (BOOL)enableNewFooter;
- (void)updateWithButtonStyleDict:;
- (void)setEnableNewFooter:;
- (id)buttonStyle;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)fallbackConfig;
+ (id)validKeys;
@end
