@interface MLE5InputPortBinder : NSObject
@property (nonatomic) ^{e5rt_io_port=} portHandle;
@property (nonatomic) MLFeatureValue featureValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPort:;
- (void).cxx_destruct;
- (id)featureValue;
- (BOOL)bindFeatureValue:error:;
- (id)portHandle;
- (void)setFeatureValue:;
@end
