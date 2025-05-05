@interface ARWorldAlignmentData : NSObject
@property (nonatomic) {?=[4]} worldAlignmentTransform;
@property (nonatomic) Q worldAlignmentModifiers;
@property (nonatomic) BOOL worldAlignmentReset;
@property (nonatomic) BOOL referenceOriginChanged;
@property (nonatomic) BOOL sessionShouldResumeCameraPosition;
@property (nonatomic) BOOL sessionShouldResumeCameraPositionAndHeading;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)worldAlignmentTransform;
- (unsigned long long)worldAlignmentModifiers;
- (BOOL)referenceOriginChanged;
- (void)setReferenceOriginChanged:;
- (void)setWorldAlignmentTransform:;
- (BOOL)worldAlignmentReset;
- (void)setWorldAlignmentReset:;
- (BOOL)sessionShouldResumeCameraPosition;
- (void)setSessionShouldResumeCameraPosition:;
- (BOOL)sessionShouldResumeCameraPositionAndHeading;
- (void)setSessionShouldResumeCameraPositionAndHeading:;
+ (BOOL)supportsSecureCoding;
@end
