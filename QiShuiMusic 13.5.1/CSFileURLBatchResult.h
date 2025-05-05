@interface CSFileURLBatchResult : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSError error;
- (id)url;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFileURL:andError:;
+ (BOOL)supportsSecureCoding;
@end
