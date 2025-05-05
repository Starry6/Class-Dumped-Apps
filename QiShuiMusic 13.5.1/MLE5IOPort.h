@interface MLE5IOPort : NSObject
@property (nonatomic) ^{e5rt_io_port=} portHandle;
@property (nonatomic) MLFeatureDescription featureDescription;
@property (nonatomic) <MLE5PortBinder> binder;
@property (nonatomic) NSString name;
@property (nonatomic) MLFeatureValue featureValue;
- (void)dealloc;
- (id)featureDescription;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)featureValue;
- (id)portHandle;
- (void)setFeatureValue:;
- (id)initWithPortHandle:name:featureDescription:;
- (BOOL)prepareAndReturnError:;
- (id)binder;
- (void)setBinder:;
@end
