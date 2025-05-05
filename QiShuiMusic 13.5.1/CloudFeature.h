@interface CloudFeature : NSObject
@property (nonatomic) NSString description;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
