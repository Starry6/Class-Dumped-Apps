@interface PAOngoingAccessRecord : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) PAAccess access;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)access;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)startTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAccess:startTime:;
+ (BOOL)supportsSecureCoding;
@end
