@interface MDPerson : CSPerson
@property (nonatomic) NSString handle;
- (id)handle;
- (id)initWithDisplayName:handle:handleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
