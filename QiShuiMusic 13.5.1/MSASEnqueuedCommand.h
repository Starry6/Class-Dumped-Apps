@interface MSASEnqueuedCommand : NSObject
@property (nonatomic) NSString command;
@property (nonatomic) NSDictionary variantParam;
@property (nonatomic) NSDictionary invariantParam;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)command;
- (void).cxx_destruct;
- (void)setCommand:;
- (id)initWithCommand:variantParam:invariantParam:;
- (BOOL)canBeGroupedWithCommand:;
- (id)variantParam;
- (void)setVariantParam:;
- (id)invariantParam;
- (void)setInvariantParam:;
+ (id)command;
+ (id)commandwithCommand:variantParam:invariantParam:;
@end
