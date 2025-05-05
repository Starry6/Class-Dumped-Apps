@interface PLDetectedFaceprint : PLManagedObject
@property (nonatomic) PLDetectedFace face;
@property (nonatomic) NSInteger faceprintVersion;
@property (nonatomic) NSData data;
+ (id)entityName;
@end
