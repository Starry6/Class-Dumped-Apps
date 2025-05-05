@interface CVAPortraitResult_Impl : NSObject
@property (nonatomic) <CVAMattingResult> mattingResult;
@property (nonatomic) ^{__CVBuffer=} portraitPixelBuffer;
@property (nonatomic) float portraitStability;
@property (nonatomic) float relightingStability;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (float)relightingStability;
- (float)portraitStability;
- (id)portraitPixelBuffer;
- (id)mattingResult;
- (id)initWithMattingResult:portraitPixelBuffer:portraitStability:;
- (id)initWithMattingResult:portraitPixelBuffer:portraitStability:relightingStability:;
@end
