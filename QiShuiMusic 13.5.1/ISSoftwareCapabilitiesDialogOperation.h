@interface ISSoftwareCapabilitiesDialogOperation : ISOperation
@property (nonatomic) NSDictionary mismatches;
@property (nonatomic) @ requiredCapabilities;
- (void)dealloc;
- (id)requiredCapabilities;
- (void)run;
- (id)initWithRequiredCapabilities:mismatches:;
- (id)mismatches;
- (void)_postDefaultDialog;
@end
