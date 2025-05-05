@interface CLPair : NSObject
@property (nonatomic) NSInteger first;
@property (nonatomic) NSInteger second;
- (int)second;
- (id)initWithCoder:;
- (int)first;
- (void)encodeWithCoder:;
- (id)initWithFirst:second:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
