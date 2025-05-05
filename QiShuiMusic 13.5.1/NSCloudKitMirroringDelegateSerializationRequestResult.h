@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult
@property (nonatomic) NSDictionary serializedObjects;
- (void)dealloc;
- (id)initWithRequest:storeIdentifier:serializedObjects:error:;
- (id)serializedObjects;
@end
