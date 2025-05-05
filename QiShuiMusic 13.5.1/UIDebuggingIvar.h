@interface UIDebuggingIvar : NSObject
@property (nonatomic) NSObject object;
@property (nonatomic) ^{objc_ivar=} objcIvar;
@property (nonatomic) NSString name;
@property (nonatomic) NSString typeDescription;
@property (nonatomic) r* typeEncoding;
@property (nonatomic) @ value;
@property (nonatomic) NSString valueDescription;
@property (nonatomic) BOOL isObject;
- (void)setObject:;
- (void)dealloc;
- (void)setName:;
- (void)setValue:;
- (BOOL)isObject;
- (id)object;
- (id)value;
- (id)typeDescription;
- (id)name;
- (id)valueDescription;
- (void)setTypeDescription:;
- (id)objcIvar;
- (void)setObjcIvar:;
- (id)typeEncoding;
- (void)setTypeEncoding:;
+ (id)ivarWithObjcIvar:forObject:;
@end
