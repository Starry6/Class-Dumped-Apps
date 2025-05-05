@interface BWInferencePrimaryCaptureRectDescriptor : NSObject
@property (nonatomic) c identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)applicableToSampleBuffer:forMediaKey:;
- (char)identifier;
- (id)rectForSampleBuffer:;
- (id)maxCropForDimensions:;
- (id)copyWithZone:;
@end
