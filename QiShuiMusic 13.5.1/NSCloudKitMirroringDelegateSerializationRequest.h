@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest
@property (nonatomic) Q resultType;
@property (nonatomic) NSSet objectIDsToSerialize;
- (void)dealloc;
- (void)setResultType:;
- (unsigned long long)resultType;
- (id)initWithOptions:completionBlock:;
- (id)description;
- (id)copyWithZone:;
- (void)setObjectIDsToSerialize:;
- (id)objectIDsToSerialize;
@end
