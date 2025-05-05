@interface VCPBlurAnalyzer : VCPImageAnalyzer
- (float)computeRegionSharpness:width:height:stride:;
- (int)computeSharpnessScore:forObjects:inImage:;
@end
