@interface BSCornerRadiusConfiguration : NSObject
@property (nonatomic) BOOL isCongruent;
@property (nonatomic) double topLeft;
@property (nonatomic) double bottomLeft;
@property (nonatomic) double bottomRight;
@property (nonatomic) double topRight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCornerRadius:;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (double)topLeft;
- (id)initWithTopLeft:bottomLeft:bottomRight:topRight:;
- (id)initWithXPCDictionary:;
- (double)topRight;
- (BOOL)isCongruent;
- (double)bottomLeft;
- (id)description;
- (double)bottomRight;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
