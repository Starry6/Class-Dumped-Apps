@interface BWSoftISPProcessorControllerRequest : BWStillImageProcessorControllerRequest
@property (nonatomic) Q uniqueID;
- (unsigned long long)uniqueID;
- (void)dealloc;
- (id)description;
- (id)initWithInput:delegate:;
- (BOOL)readyForProcessing;
@end
