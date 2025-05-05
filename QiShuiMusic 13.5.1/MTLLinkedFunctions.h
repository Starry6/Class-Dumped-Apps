@interface MTLLinkedFunctions : NSObject
@property (nonatomic) NSArray functions;
@property (nonatomic) NSArray binaryFunctions;
@property (nonatomic) NSDictionary groups;
@property (nonatomic) NSArray privateFunctions;
- (id)privateFunctions;
- (void)setPrivateFunctions:;
- (void)reset;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)linkedFunctions;
@end
