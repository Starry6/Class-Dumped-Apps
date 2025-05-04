@interface AWEStorageServiceStorageDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willReadValueForKey:identifier:;
- (void)didReadValueForKey:from:identifier:;
- (void)willDeserialization:key:identifier:;
- (void)didDeserialization:deserializedValue:key:identifier:;
- (void)didSetValue:key:error:identifier:;
- (void)willWrite:key:identifier:;
- (void)didWrite:key:identifier:;
- (void)willSerialize:key:identifier:;
- (void)didSerialize:key:encodedData:identifier:;
- (void)willSetValue:key:domain:identifier:;
- (void)willGetValueForKey:domain:identifier:;
- (void)didGetValue:Key:error:identifier:;
- (void)willWriteData:toPath:domain:;
- (void)didWriteData:toPath:domain:error:;
- (void)willReadDataFromPath:domain:;
- (void)didReadData:Path:domain:error:;
+ (id)sharedInstance;
@end
