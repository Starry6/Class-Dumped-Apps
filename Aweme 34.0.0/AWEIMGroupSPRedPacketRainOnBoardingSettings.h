@interface AWEIMGroupSPRedPacketRainOnBoardingSettings : NSObject
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) BOOL enableAllInteractiveEmoji;
@property (nonatomic) NSArray supportStickerTypes;
- (BOOL)enableAllInteractiveEmoji;
- (id)supportStickerTypes;
- (id)init;
- (id)icon;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDictionary:;
- (id)buttonTitle;
@end
