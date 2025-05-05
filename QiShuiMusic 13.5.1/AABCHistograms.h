@interface AABCHistograms : NSObject
@property (nonatomic) CBHistogramBuilder L;
@property (nonatomic) CBHistogramBuilder LOff;
@property (nonatomic) CBHistogramBuilder LDevice;
@property (nonatomic) CBHistogramBuilder LDeviceOff;
@property (nonatomic) CBHistogramBuilder LLPM;
@property (nonatomic) CBHistogramBuilder E;
- (id)init;
- (id)LOff;
- (void)dealloc;
- (id)LDevice;
- (id)E;
- (void)submit;
- (id)LLPM;
- (id)L;
- (id)LDeviceOff;
@end
