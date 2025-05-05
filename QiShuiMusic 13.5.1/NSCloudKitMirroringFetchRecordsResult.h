@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult
@property (nonatomic) NSArray updatedObjectIDs;
@property (nonatomic) NSDictionary failedObjectIDsToError;
- (void)dealloc;
- (id)failedObjectIDsToError;
- (id)updatedObjectIDs;
- (id)initWithRequest:storeIdentifier:success:madeChanges:updatedObjectIDs:failedObjectIDToError:error:;
@end
