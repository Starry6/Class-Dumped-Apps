@interface BWBracketSettings : NSObject
@property (nonatomic) NSInteger bracketingMode;
@property (nonatomic) NSInteger bracketFrameCount;
@property (nonatomic) BOOL providePreBracketedEV0;
@property (nonatomic) BOOL lensStabilizationEnabledForClientBracket;
@property (nonatomic) NSArray exposureValues;
@property (nonatomic) NSArray manualExposureBracketedCaptureParams;
@property (nonatomic) NSDictionary oisBracketedCaptureParams;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setLensStabilizationEnabledForClientBracket:;
- (BOOL)lensStabilizationEnabledForClientBracket;
- (id)description;
- (BOOL)isEqual:;
- (int)bracketFrameCount;
- (int)bracketingMode;
- (BOOL)providePreBracketedEV0;
- (void)setProvidePreBracketedEV0:;
- (id)exposureValues;
- (void)setExposureValues:;
- (id)manualExposureBracketedCaptureParams;
- (void)setManualExposureBracketedCaptureParams:;
- (id)oisBracketedCaptureParams;
- (void)setOisBracketedCaptureParams:;
+ (BOOL)supportsSecureCoding;
+ (id)bracketSettingsForBracketingMode:;
@end
