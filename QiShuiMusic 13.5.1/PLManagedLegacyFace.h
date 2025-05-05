@interface PLManagedLegacyFace : PLManagedObject
@property (nonatomic) NSValue relativeRectValue;
@property (nonatomic) PLManagedAsset asset;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} relativeRect;
@property (nonatomic) s identifier;
@property (nonatomic) NSString albumUUID;
- (void)delete;
- (id)relativeRect;
- (void)setRelativeRect:;
+ (id)entityName;
@end
