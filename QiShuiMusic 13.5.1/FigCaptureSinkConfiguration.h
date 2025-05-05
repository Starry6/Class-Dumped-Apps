@interface FigCaptureSinkConfiguration : NSObject
@property (nonatomic) NSString sinkID;
@property (nonatomic) NSInteger sinkType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (int)sinkType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)sinkID;
- (BOOL)isEqual:;
- (void)setSinkID:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForSinkType:;
@end
