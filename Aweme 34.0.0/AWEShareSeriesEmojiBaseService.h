@interface AWEShareSeriesEmojiBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithSeriesEmoji:extraLogInfo:onViewController:;
- (id)showPanelWithImage:onViewController:scene:extraParams:;
- (id)contextWithSeriesEmoji:;
@end
