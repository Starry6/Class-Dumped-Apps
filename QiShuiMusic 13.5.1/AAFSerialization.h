@interface AAFSerialization : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)serializerOfType:;
- (void)addSerializer:;
+ (id)instance;
+ (id)dictionaryFromObject:ofType:;
+ (id)dataFromDictionary:ofType:;
+ (id)stringFromDictionary:ofType:;
+ (id)ofType:;
@end
