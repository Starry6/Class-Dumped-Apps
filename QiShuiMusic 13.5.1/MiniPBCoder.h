@interface MiniPBCoder : NSObject
- (void)writeRootObject;
- (id)decodeOneDictionaryOfValueClass:;
- (id)decodeOneObject:ofClass:;
- (id)getEncodeData;
- (id)initForWritingWithTarget:;
- (unsigned long long)prepareObjectForEncode:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initForReadingWithData:;
+ (id)decodeContainerOfClass:withValueClass:fromData:;
+ (id)decodeObjectOfClass:fromData:;
+ (id)encodeDataWithObject:;
+ (BOOL)isMiniPBCoderCompatibleObject:;
+ (BOOL)isMiniPBCoderCompatibleType:;
@end
