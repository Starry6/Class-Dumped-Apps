@interface CNTestFuture : NSObject
@property (nonatomic) <NSObject><NSSecureCoding> result;
@property (nonatomic) NSError error;
- (id)result;
- (id)initWithError:;
- (id)initWithResult:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)futureWithError:;
+ (id)futureWithResult:;
@end
