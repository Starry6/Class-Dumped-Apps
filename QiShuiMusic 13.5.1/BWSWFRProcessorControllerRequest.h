@interface BWSWFRProcessorControllerRequest : BWStillImageProcessorControllerRequest
@property (nonatomic) NSInteger demosaicedRawErr;
- (BOOL)readyForProcessing;
- (int)demosaicedRawErr;
- (void)setDemosaicedRawErr:;
@end
