@interface WFOnScreenContentServiceOptions : NSObject
@property (nonatomic) NSArray supportedItemClasses;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSupportedItemClasses:;
- (id)supportedItemClasses;
+ (BOOL)supportsSecureCoding;
@end
