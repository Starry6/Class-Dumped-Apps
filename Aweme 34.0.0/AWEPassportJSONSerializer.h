@interface AWEPassportJSONSerializer : NSObject
+ (id)transferJSON:modelClass:error:;
+ (BOOL)processWithURL:originalParams:response:rawData:mappingError:completionBlock:;
@end
