@interface MLE5OutputPortBinder : NSObject
@property (nonatomic) ^{e5rt_io_port=} portHandle;
@property (nonatomic) MLFeatureDescription featureDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) @ outputBacking;
@property (nonatomic) MLFeatureValue featureValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serialQueue;
- (id)featureDescription;
- (void).cxx_destruct;
- (id)featureValue;
- (id)portHandle;
- (id)initWithPort:featureDescription:;
- (BOOL)bindAndReturnError:;
- (id)_makeFeatureValueAndReturnError:;
- (id)outputBacking;
- (void)setOutputBacking:;
@end
