@interface ASDViewPresentationRequest : NSObject
@property (nonatomic) q viewIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithViewIdentifier:;
- (long long)viewIdentifier;
+ (BOOL)supportsSecureCoding;
@end
