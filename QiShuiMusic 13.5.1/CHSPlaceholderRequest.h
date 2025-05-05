@interface CHSPlaceholderRequest : NSObject
@property (nonatomic) CHSWidgetMetrics metrics;
@property (nonatomic) q family;
@property (nonatomic) NSFileHandle fileHandle;
- (long long)family;
- (id)fileHandle;
- (id)init;
- (id)metrics;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithMetrics:family:fileHandle:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
