@interface UIKBPhoneToCarPlayTransformation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)transformationIdentifier;
+ (id)transformKeyplane:withTransformationContext:;
+ (id)cachedKeys;
+ (unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:;
+ (id)fillFrame:withEmptyKeyNamed:inKeyplane:withTransformationContext:;
+ (void)removeAddedKeysFromKeyplane:;
+ (id)transformQWERTYKeyplane:withTransformationContext:;
+ (id)transform10KeyKeyplane:withTransformationContext:;
+ (id)cachedKeysForTransformationContext:;
@end
