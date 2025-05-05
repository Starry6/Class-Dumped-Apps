@interface SFMaskGenerationFunction1 : NSObject
@property (nonatomic) <SFDigestOperation> digestOperation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDigestOperation:;
- (id)digestOperation;
- (id)copyWithZone:;
- (id)generateMaskWithLength:data:error:;
- (id)initWithDigestOperation:;
+ (BOOL)supportsSecureCoding;
@end
