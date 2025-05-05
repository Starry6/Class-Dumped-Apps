@interface CHKWidgetEnvironment : NSObject
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q hash;
- (id)init;
- (id)initWithCoder:;
- (long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
