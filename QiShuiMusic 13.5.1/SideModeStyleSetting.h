@interface SideModeStyleSetting : NSObject
@property (nonatomic) double messageListWidth;
@property (nonatomic) double giftMaskAreaHeight;
@property (nonatomic) double giftMaskAreaSafeMargin;
@property (nonatomic) double messageListPadding;
- (double)giftMaskAreaHeight;
- (double)giftMaskAreaSafeMargin;
- (double)messageListPadding;
- (double)messageListWidth;
- (void)setGiftMaskAreaHeight:;
- (void)setGiftMaskAreaSafeMargin:;
- (void)setMessageListPadding:;
- (void)setMessageListWidth:;
- (id)init;
- (void)_loadDefaults;
+ (id)shared;
@end
