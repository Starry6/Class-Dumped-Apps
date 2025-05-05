@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult
@property (nonatomic) NSDictionary objectIDToLastExportedToken;
- (id)objectIDToLastExportedToken;
- (void)dealloc;
- (id)initWithRequest:storeIdentifier:objectIDToLastExportedToken:error:;
@end
