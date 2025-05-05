@interface MXCallStackTree : NSObject
@property (nonatomic) NSArray callStackThreads;
@property (nonatomic) BOOL callStackPerThread;
- (id)JSONRepresentation;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithThreadArray:aggregatedByProcess:;
- (id)callStackThreads;
- (BOOL)callStackPerThread;
+ (BOOL)supportsSecureCoding;
@end
