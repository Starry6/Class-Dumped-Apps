@interface AWEFeedQuickFlashStickerHideIdentifier : NSObject
@property (nonatomic) NSDictionary hiddenAweme;
@property (nonatomic) AWEPageContext feedPageContext;
- (id)feedPageContext;
- (void)setFeedPageContext:;
- (BOOL)quickFlashStickerIsHiddenWithAwemeId:;
- (void)addIdToHiddenAwemeWithAwemeId:;
- (id)hiddenAweme;
- (void)setHiddenAweme:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
