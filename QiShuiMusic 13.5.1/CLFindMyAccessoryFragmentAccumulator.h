@interface CLFindMyAccessoryFragmentAccumulator : NSObject
@property (nonatomic) NSMutableDictionary uuidToData;
@property (nonatomic) Q maxBytesPerUUID;
- (void)dealloc;
- (id)dataForUUID:;
- (id)initWithMaxBytesPerUUID:;
- (BOOL)clearForUUID:;
- (unsigned long long)getDataStatusForUUID:;
- (BOOL)appendData:forUUID:;
- (id)uuidToData;
- (void)setUuidToData:;
- (unsigned long long)maxBytesPerUUID;
- (void)setMaxBytesPerUUID:;
+ (id)convertDataStatusToString:;
@end
