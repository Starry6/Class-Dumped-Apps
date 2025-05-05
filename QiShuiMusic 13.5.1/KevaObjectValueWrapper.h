@interface KevaObjectValueWrapper : NSObject
@property (nonatomic) @ object;
@property (nonatomic) q offset;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger blockType;
@property (nonatomic) (?=Biqfd) primitiveValue;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL isObjectLoaded;
- (void)configWithType:offset:object:;
- (void)configWithType:offset:primitiveValue:;
- (BOOL)isObjectLoaded;
- (id)primitiveValue;
- (void)setBlockType:;
- (void)setPrimitiveValue:;
- (void)setObject:;
- (void)setOffset:;
- (id)init;
- (BOOL)isEmpty;
- (void)setType:;
- (long long)offset;
- (int)type;
- (void)clear;
- (void).cxx_destruct;
- (id)object;
- (int)blockType;
+ (id)valueNull;
@end
