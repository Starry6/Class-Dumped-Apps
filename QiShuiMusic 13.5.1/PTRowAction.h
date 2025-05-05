@interface PTRowAction : NSObject
@property (nonatomic) BOOL isEncodable;
@property (nonatomic) @? handler;
- (id)defaultHandler;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)handler;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)isEncodable;
- (void)setIsEncodable:;
- (BOOL)deselectsRowOnSuccess;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithHandler:;
@end
