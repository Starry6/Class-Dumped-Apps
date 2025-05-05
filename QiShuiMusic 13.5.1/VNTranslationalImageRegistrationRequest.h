@interface VNTranslationalImageRegistrationRequest : VNImageRegistrationRequest
@property (nonatomic) NSArray results;
- (BOOL)internalPerformRevision:inContext:error:;
@end
