@interface VCSleepWorkflow : NSObject
@property (nonatomic) NSArray actions;
@property (nonatomic) NSString bundleIdentifierForDisplay;
@property (nonatomic) NSString name;
@property (nonatomic) NSString summaryString;
- (id)bundleIdentifierForDisplay;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summaryString;
- (id)actions;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (id)initWithActions:;
+ (BOOL)supportsSecureCoding;
@end
