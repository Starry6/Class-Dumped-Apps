@interface SKPlaySound : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)playSoundFileNamed:atPosition:waitForCompletion:;
+ (id)_audioURLWithName:bundle:;
@end
