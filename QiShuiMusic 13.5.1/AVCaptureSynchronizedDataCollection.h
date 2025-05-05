@interface AVCaptureSynchronizedDataCollection : NSObject
@property (nonatomic) Q count;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)debugDescription;
- (id)objectForKeyedSubscript:;
- (id)description;
- (unsigned long long)count;
- (id)synchronizedDataForCaptureOutput:;
- (id)_initWithPossibleDataOutputs:;
- (void)_setSynchronizedData:forCaptureOutput:;
+ (id)_shortStringForDataOutput:syncedData:;
+ (id)_shortStringForDataDroppedReason:;
+ (id)_shortStringForMetadataObjects:;
@end
