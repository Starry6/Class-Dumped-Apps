@interface MADVIRemoveBackgroundRequest : MADRequest
@property (nonatomic) NSNumber imageType;
@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) BOOL returnMask;
- (id)imageType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setImageType:;
- (BOOL)performInPlace;
- (void)setPerformInPlace:;
- (BOOL)returnMask;
- (void)setReturnMask:;
- (BOOL)cropToFit;
- (void)setCropToFit:;
+ (BOOL)supportsSecureCoding;
@end
