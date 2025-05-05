@interface FPPreflightUserInteractionAlert : NSObject
@property (nonatomic) FPStringFormat titleFormat;
@property (nonatomic) FPStringFormat subtitleFormat;
@property (nonatomic) FPStringFormat continueCaptionFormat;
@property (nonatomic) FPStringFormat cancelCaptionFormat;
@property (nonatomic) BOOL enableContinue;
@property (nonatomic) BOOL continueIsDestructive;
- (void).cxx_destruct;
- (id)titleFormat;
- (void)setTitleFormat:;
- (id)subtitleFormat;
- (void)setSubtitleFormat:;
- (id)continueCaptionFormat;
- (void)setContinueCaptionFormat:;
- (id)cancelCaptionFormat;
- (void)setCancelCaptionFormat:;
- (BOOL)enableContinue;
- (void)setEnableContinue:;
- (BOOL)continueIsDestructive;
- (void)setContinueIsDestructive:;
+ (id)alertFromDictionary:localizationLookup:;
@end
