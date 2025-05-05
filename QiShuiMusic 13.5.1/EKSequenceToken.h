@interface EKSequenceToken : NSObject
- (int)legacyToken;
- (id)initWithCADSequenceToken:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)CADToken;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
