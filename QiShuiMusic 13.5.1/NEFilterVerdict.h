@interface NEFilterVerdict : NSObject
@property (nonatomic) q filterAction;
@property (nonatomic) BOOL needRules;
@property (nonatomic) BOOL drop;
@property (nonatomic) BOOL shouldReport;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (BOOL)drop;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)setDrop:;
- (long long)filterAction;
- (id)initWithDrop:remediate:;
- (BOOL)shouldReport;
- (void)setShouldReport:;
- (BOOL)needRules;
- (void)setNeedRules:;
+ (BOOL)supportsSecureCoding;
@end
