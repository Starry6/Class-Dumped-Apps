@interface NSDataAsset : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSData data;
@property (nonatomic) NSString typeIdentifier;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)initWithName:;
- (unsigned long long)hash;
- (id)initWithName:bundle:;
- (id)typeIdentifier;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)_namedDataPrivateAccessorWithName:bundle:;
+ (id)_namedDataPrivateAccessorWithName:bundle:;
@end
