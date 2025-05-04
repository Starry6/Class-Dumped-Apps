@interface AWERootModelPropertyInfo : NSObject
@property (nonatomic) NSString propertyName;
@property (nonatomic) NSString keyPath;
@property (nonatomic) # propertyClass;
@property (nonatomic) # modelClassInArray;
@property (nonatomic) BOOL isReadonly;
@property (nonatomic) BOOL disableStrictType;
- (void)setDisableStrictType:;
- (void)setModelClassInArray:;
- (BOOL)disableStrictType;
- (Class)modelClassInArray;
- (void)setIsReadonly:;
- (id)keyPath;
- (void)setKeyPath:;
- (void).cxx_destruct;
- (id)propertyName;
- (BOOL)isReadonly;
- (void)setPropertyName:;
- (Class)propertyClass;
- (void)setPropertyClass:;
+ (id)infoWithProperty:;
+ (id)infoWithPropertyName:;
@end
