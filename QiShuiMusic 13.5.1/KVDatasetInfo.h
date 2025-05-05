@interface KVDatasetInfo : NSObject
@property (nonatomic) NSData buffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)itemCount;
- (id)deviceId;
- (id)init;
- (id)buffer;
- (id)originAppId;
- (id)userId;
- (unsigned long long)hash;
- (long long)itemType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithItemType:originAppId:deviceId:userId:lastModifiedTime:capturedTime:itemCount:error:;
- (id)initWithItemType:originAppId:itemCount:error:;
- (id)capturedTime;
- (id)JSONWithIndent:;
- (id)initFromDictionary:error:;
- (id)initWithBuffer:error:;
- (id)initWithItemType:originAppId:userId:itemCount:error:;
- (id)initWithSizePrefixedBuffer:error:;
- (id)lastModifiedTime;
- (BOOL)isEqualToDatasetInfo:;
@end
