@interface WFCoreDataResultState : NSObject
@property (nonatomic) Q objectType;
@property (nonatomic) NSSet state;
- (unsigned long long)objectType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)state;
- (void).cxx_destruct;
- (id)initWithObjectType:state:;
+ (BOOL)supportsSecureCoding;
@end
