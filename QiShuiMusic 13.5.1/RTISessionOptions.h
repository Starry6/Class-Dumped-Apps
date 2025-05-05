@interface RTISessionOptions : NSObject
@property (nonatomic) BOOL shouldResign;
@property (nonatomic) q offscreenDirection;
- (void)setShouldResign:;
- (id)initWithCoder:;
- (long long)offscreenDirection;
- (BOOL)shouldResign;
- (void)encodeWithCoder:;
- (id)description;
- (void)setOffscreenDirection:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultEndOptions;
+ (id)defaultBeginOptions;
+ (id)defaultOptions;
@end
