@interface ISPlayerState : NSObject
@property (nonatomic) NSString diagnosticLabel;
@property (nonatomic) double photoBlurRadius;
@property (nonatomic) double videoAlpha;
@property (nonatomic) double videoBlurRadius;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPhotoBlurRadius:videoAlpha:videoBlurRadius:label:;
- (id)diagnosticLabel;
- (double)photoBlurRadius;
- (double)videoAlpha;
- (double)videoBlurRadius;
+ (id)outputInfoWithPhotoBlurRadius:videoAlpha:videoBlurRadius:label:;
@end
