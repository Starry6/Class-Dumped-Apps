@interface PAPartialAccessRecord : NSObject
@property (nonatomic) double endTime;
@property (nonatomic) PAAccess access;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)access;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)endTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAccess:endTime:;
+ (BOOL)supportsSecureCoding;
@end
