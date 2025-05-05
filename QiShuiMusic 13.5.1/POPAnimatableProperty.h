@interface POPAnimatableProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? readBlock;
@property (nonatomic) @? writeBlock;
@property (nonatomic) double threshold;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)propertyWithName:;
+ (id)propertyWithName:initializer:;
+ (id)allocWithZone:;
@end
