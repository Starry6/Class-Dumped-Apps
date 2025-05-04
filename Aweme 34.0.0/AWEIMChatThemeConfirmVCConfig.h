@interface AWEIMChatThemeConfirmVCConfig : NSObject
@property (nonatomic) q style;
@property (nonatomic) AWEIMChatThemeModel model;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) NSArray peerURLList;
- (void)setPeerURLList:;
- (id)peerURLList;
- (void)setModel:;
- (void)setIsGroup:;
- (long long)style;
- (BOOL)isGroup;
- (id)model;
- (void).cxx_destruct;
- (void)setStyle:;
@end
