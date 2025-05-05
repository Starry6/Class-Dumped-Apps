@interface PACompleteAccessRecord : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double duration;
@property (nonatomic) PAAccess access;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)access;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)startTime;
- (double)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (BOOL)isEqual:;
- (id)initWithAccess:startTime:endTime:;
- (BOOL)isEqualToAccessRecord:;
+ (BOOL)supportsSecureCoding;
@end
