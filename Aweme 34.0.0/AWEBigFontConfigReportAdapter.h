@interface AWEBigFontConfigReportAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportElderModeConfig:;
- (void)reportBigFontModeConfig:;
- (BOOL)canRequestSetSettings;
- (long long)largeCharacterSizeWithFontStyle:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
