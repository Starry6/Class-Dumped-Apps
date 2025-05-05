@interface MTLSharedEventHandle : NSObject
@property (nonatomic) NSString label;
- (void)dealloc;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (unsigned int)eventPort;
- (unsigned long long)labelTraceID;
- (id)initWithSharedEvent:;
+ (BOOL)supportsSecureCoding;
@end
