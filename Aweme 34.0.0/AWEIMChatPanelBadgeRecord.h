@interface AWEIMChatPanelBadgeRecord : NSObject
@property (nonatomic) NSString badgeKey;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) q clickCount;
@property (nonatomic) q exposeCount;
- (long long)exposeCount;
- (void)setExposeCount:;
- (void)setBadgeKey:;
- (id)badgeKey;
- (void)resetWithBadgeKey:;
- (void)encodeWithCoder:;
- (void)setClickCount:;
- (void).cxx_destruct;
- (long long)clickCount;
- (id)initWithCoder:;
- (BOOL)shouldShow;
- (void)setShouldShow:;
@end
