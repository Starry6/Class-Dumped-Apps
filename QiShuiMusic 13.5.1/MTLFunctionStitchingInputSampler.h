@interface MTLFunctionStitchingInputSampler : NSObject
@property (nonatomic) Q bindIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)bindIndex;
- (unsigned long long)hash;
- (id)initWithBindIndex:;
- (void)setBindIndex:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
