@interface WFFolderQuery : WFResultQuery
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
