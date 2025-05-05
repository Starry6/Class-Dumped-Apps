@interface OSLogEntry : NSObject
@property (nonatomic) NSString composedMessage;
@property (nonatomic) NSDate date;
@property (nonatomic) q storeCategory;
- (id)composedMessage;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (id)initWithEventProxy:;
- (void).cxx_destruct;
- (id)initWithDate:composedMessage:;
- (long long)storeCategory;
+ (BOOL)supportsSecureCoding;
@end
