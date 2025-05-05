@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep
@property (nonatomic) CHStringOVSChecker ovsStringChecker;
- (void).cxx_destruct;
- (id)ovsStringChecker;
- (void)setOvsStringChecker:;
- (id)process:options:;
- (id)initWithOVSStringChecker:;
@end
