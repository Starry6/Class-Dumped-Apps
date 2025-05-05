@interface DESDebugRecord : NSObject
@property (nonatomic) NSString recordID;
@property (nonatomic) NSDictionary debugInfo;
- (id)debugInfo;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (id)initFromStoreWithPluginID:taskSource:;
- (id)initWithPluginID:taskSource:;
- (id)initWithRecordID:debugInfo:;
- (id)stringForResult:;
- (void)addForTaskID:result:description:;
- (BOOL)commitWithError:;
+ (id)recordIDFromPluginID:taskSource:;
@end
