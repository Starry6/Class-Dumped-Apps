@interface FACircleStateResponse : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (id)error;
- (id)initWithCoder:;
- (BOOL)success;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLoadSuccess:error:userInfo:;
- (BOOL)loadSuccess;
+ (BOOL)supportsSecureCoding;
@end
