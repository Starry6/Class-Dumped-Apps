@interface MEMessageActionFlagChange : NSObject
@property (nonatomic) q flag;
- (long long)flag;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithFlag:;
+ (BOOL)supportsSecureCoding;
@end
