@interface MTLFunctionConstant : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) Q index;
@property (nonatomic) BOOL required;
+ (id)allocWithZone:;
+ (id)alloc;
@end
