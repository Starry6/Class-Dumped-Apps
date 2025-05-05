@interface MSIdleAutosaveItem : NSObject
@property (nonatomic) NSString autosaveIdentifier;
@property (nonatomic) NSString subject;
- (id)subject;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)autosaveIdentifier;
- (id)initWithAutosaveIdentifier:subject:;
+ (BOOL)supportsSecureCoding;
+ (id)withAutosaveIdentifier:subject:;
@end
