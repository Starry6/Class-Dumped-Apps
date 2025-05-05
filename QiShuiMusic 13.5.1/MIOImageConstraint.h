@interface MIOImageConstraint : NSObject
@property (nonatomic) MIOImageSize imageSize;
@property (nonatomic) I pixelFormatType;
@property (nonatomic) MIOImageSizeConstraint sizeConstraint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageSize;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecification:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)pixelFormatType;
- (id)sizeConstraint;
- (id)imageFeatureTypeSpecification;
@end
