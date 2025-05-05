@interface NSBatchDeleteRequestEncodingToken : NSObject
@property (nonatomic) NSData fetchData;
@property (nonatomic) q resultType;
@property (nonatomic) BOOL secure;
- (void)dealloc;
- (id)initWithCoder:;
- (long long)resultType;
- (void)encodeWithCoder:;
- (id)initForRequest:;
- (BOOL)secure;
- (id)fetchData;
+ (BOOL)supportsSecureCoding;
@end
