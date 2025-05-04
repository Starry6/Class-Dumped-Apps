@interface AWENetwork.JsonToModel : NSObject
- (id)init;
+ (id)convertWithResponse:data:modelType:error:;
+ (id)convertWithResponse:data:modelClass:error:;
@end
