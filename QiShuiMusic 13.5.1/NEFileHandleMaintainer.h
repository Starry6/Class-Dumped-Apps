@interface NEFileHandleMaintainer : NSObject
@property (nonatomic) NSString eventName;
- (void)commit;
- (id)init;
- (void)iterateFileHandlesWithBlock:;
- (void)setAuxiliaryData:forKey:;
- (void)resetFileHandlesFromEvent:;
- (void)removeFileHandleMatchingPredicate:;
- (id)eventName;
- (void)setEventName:;
- (id)copyAuxiliaryDataForKey:;
- (void).cxx_destruct;
- (void)setFileHandle:matchingPredicate:;
- (id)createEvent;
- (void)startOwnerModeWithEventName:handlesReceivedCallback:;
+ (id)sharedMaintainer;
@end
