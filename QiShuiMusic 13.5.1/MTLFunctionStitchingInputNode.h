@interface MTLFunctionStitchingInputNode : NSObject
@property (nonatomic) Q argumentIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (unsigned long long)argumentIndex;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithArgumentIndex:;
- (void)setArgumentIndex:;
@end
