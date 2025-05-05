@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject
@property (nonatomic) NSArray groupIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)groupIdentifiers;
- (id)initWithGroupIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
