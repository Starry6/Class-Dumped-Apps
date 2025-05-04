@interface AWEQRCodeStyleTemplateModel : AWEBaseApiModel
@property (nonatomic) NSString backgroundStartColor;
@property (nonatomic) NSString backgroundEndColor;
@property (nonatomic) NSString qrCodeColor;
@property (nonatomic) NSString templateImageUrl;
@property (nonatomic) q templateContentMode;
@property (nonatomic) NSString templateTrackEvent;
@property (nonatomic) UIImage templateImage;
@property (nonatomic) AWEURLModel backgroundImageUrl;
- (id)backgroundImageUrl;
- (long long)templateContentMode;
- (id)templateImageUrl;
- (id)backgroundEndColor;
- (id)backgroundStartColor;
- (void)setBackgroundImageUrl:;
- (void)setTemplateContentMode:;
- (void)setTemplateTrackEvent:;
- (id)templateTrackEvent;
- (void)setQrCodeColor:;
- (void)setBackgroundStartColor:;
- (void)setBackgroundEndColor:;
- (id)qrCodeColor;
- (void)setTemplateImageUrl:;
- (void).cxx_destruct;
- (id)templateImage;
- (void)setTemplateImage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
