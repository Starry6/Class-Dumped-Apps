@interface AWEIMSwitchCFBubbleColorSingleViewConfig : NSObject
@property (nonatomic) UIColor ownBackgroundColor;
@property (nonatomic) NSArray avatarUrls;
@property (nonatomic) NSString descString;
@property (nonatomic) <AWEIMImageProtocol> keyProvider;
- (id)descString;
- (void)setDescString:;
- (void)setKeyProvider:;
- (id)avatarUrls;
- (void)setAvatarUrls:;
- (id)ownBackgroundColor;
- (void)setOwnBackgroundColor:;
- (void).cxx_destruct;
- (id)keyProvider;
@end
