@interface AWEInteractionStickerOpenPlatformModel : NSObject
@property (nonatomic) NSString jumpTitle;
@property (nonatomic) NSString jumpH5Url;
@property (nonatomic) NSString jumpMicroAppUrl;
@property (nonatomic) BOOL shouldShowBubble;
@property (nonatomic) q jumpType;
- (long long)jumpType;
- (void)setJumpType:;
- (BOOL)shouldShowBubble;
- (void)setShouldShowBubble:;
- (id)jumpTitle;
- (void)setJumpTitle:;
- (void)setJumpMicroAppUrl:;
- (void)setJumpH5Url:;
- (id)jumpH5Url;
- (id)jumpMicroAppUrl;
- (void).cxx_destruct;
@end
