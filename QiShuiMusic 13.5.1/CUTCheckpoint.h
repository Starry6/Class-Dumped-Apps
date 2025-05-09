@interface CUTCheckpoint : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) BOOL assertsUseAfterFreeze;
@property (nonatomic) BOOL shouldLogTouches;
- (id)uniqueIdentifier;
- (void)freeze;
- (id)initWithCoder:;
- (BOOL)isFrozen;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)report;
- (id)copyWithZone:;
- (id)initWithName:uniqueIdentifier:;
- (void)_freeze;
- (BOOL)_assertNotFrozen;
- (id)_freezeBacktrace;
- (void)_appendReportToMutableString:indentation:paddedNameLength:;
- (id)_reportMetadata;
- (id)_reportName;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (BOOL)assertsUseAfterFreeze;
- (void)setAssertsUseAfterFreeze:;
- (BOOL)shouldLogTouches;
- (void)setShouldLogTouches:;
+ (BOOL)supportsSecureCoding;
+ (id)_allowlistedClasses;
+ (id)_reportDateFormatter;
@end
