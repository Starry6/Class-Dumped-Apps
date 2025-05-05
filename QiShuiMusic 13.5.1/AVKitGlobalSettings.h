@interface AVKitGlobalSettings : NSObject
@property (nonatomic) BOOL secondGenerationPlayerEnabled;
@property (nonatomic) BOOL playbackSpeedControlEnabled;
@property (nonatomic) BOOL visualAnalysisEnabled;
@property (nonatomic) BOOL visualAnalysisSupported;
@property (nonatomic) BOOL isQuickLook;
- (void)setSecondGenerationPlayerEnabled:;
- (id)init;
- (BOOL)visualAnalysisEnabled;
- (BOOL)playbackSpeedControlEnabled;
- (BOOL)visualAnalysisSupported;
- (BOOL)secondGenerationPlayerEnabled;
- (BOOL)isQuickLook;
+ (id)shared;
+ (BOOL)_isQuickLook;
@end
