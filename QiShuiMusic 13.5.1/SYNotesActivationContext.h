@interface SYNotesActivationContext : NSObject
@property (nonatomic) NSData userActivityData;
@property (nonatomic) BSProcessHandle processHandle;
@property (nonatomic) I contextID;
@property (nonatomic) Q renderID;
- (id)init;
- (unsigned int)contextID;
- (id)initWithCoder:;
- (id)processHandle;
- (void)encodeWithCoder:;
- (id)userActivityData;
- (void).cxx_destruct;
- (unsigned long long)renderID;
- (id)initWithUserActivityData:contextID:renderID:;
+ (BOOL)supportsSecureCoding;
@end
