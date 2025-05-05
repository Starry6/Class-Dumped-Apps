@interface AutoMatchBanner : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText mainGuideText;
@property (nonatomic) BOOL hasMainGuideText;
@property (nonatomic) HTSLiveText subGuideText;
@property (nonatomic) BOOL hasSubGuideText;
@property (nonatomic) HTSLiveText buttonText;
@property (nonatomic) BOOL hasButtonText;
+ (id)descriptor;
@end
