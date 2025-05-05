@interface StructuredDataReport : OSAReport
- (void)dealloc;
- (id)problemType;
- (void)generateCustomLogAtLevel:withBlock:;
- (int)streamContentAtLevel:withBlock:;
- (id)appleCareDetails;
- (id)initWithType:withFile:;
- (id)reportNamePrefix;
- (void)generateLogAtLevel:withBlock:;
- (BOOL)isActionable;
@end
