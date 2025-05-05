@interface DSP_HALMock_Factory : NSObject
@property (nonatomic) NSInteger featureFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)featureFlag;
- (void)setFeatureFlag:;
- (id)createProcessor:withHost:;
@end
