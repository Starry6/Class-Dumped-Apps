@interface ASDViewPresentationResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSNumber numberResult;
@property (nonatomic) NSString stringResult;
- (id)initWithError:;
- (id)initWithString:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithNumber:;
- (id)numberResult;
- (id)stringResult;
+ (BOOL)supportsSecureCoding;
@end
