@interface PET2LoggingOutlet : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_findBucketsForKey:;
- (void)logUnsignedIntegerValue:forEvent:featureId:stringifiedProperties:metaData:;
- (void)logErrorForEvent:featureId:reason:;
- (void)setUnsignedIntegerValue:forEvent:featureId:stringifiedProperties:metaData:;
- (void).cxx_destruct;
- (void)_dispatchBatchForKey:value:isUpdate:;
- (void)logDoubleValue:forEvent:featureId:stringifiedProperties:metaData:;
+ (id)sharedInstance;
@end
