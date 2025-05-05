@interface QLKeyCommand : NSObject
@property (nonatomic) UIKeyCommand keyCommand;
@property (nonatomic) Q keyCommandIdentifier;
- (id)initWithCoder:;
- (id)keyCommand;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setKeyCommand:;
- (unsigned long long)keyCommandIdentifier;
- (void)setKeyCommandIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)keyCommandWithKeyCommand:identifier:;
@end
