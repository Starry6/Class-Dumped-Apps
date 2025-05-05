@interface CKNetRequestManagerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestForBinaryWithParam:completion:;
- (void)requestForJsonWithParam:completion:;
+ (void)lokiRequestForJson:modelOfClass:serializeType:jsonFields:stageCallback:completion:;
+ (void)requestForJson:modelOfClass:serializeType:filterServerError:jsonFields:stageCallback:completion:;
+ (id)sharedInstance;
@end
