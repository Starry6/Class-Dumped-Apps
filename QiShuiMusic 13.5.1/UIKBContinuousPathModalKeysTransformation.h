@interface UIKBContinuousPathModalKeysTransformation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)transformationIdentifier;
+ (id)transformKeyplane:withTransformationContext:;
+ (id)rollbackKeyplane:withTransformationContext:;
+ (id)_donorKeyplaneForKeyplane:transformationContext:;
+ (id)_donorControlKeysForLastDisplayRowForKeyplane:transformationContext:;
@end
