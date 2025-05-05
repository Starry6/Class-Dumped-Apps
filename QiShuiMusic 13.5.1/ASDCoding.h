@interface ASDCoding : NSObject
+ (id)createDataByEncodingError:;
+ (id)createErrorByDecodingData:;
+ (BOOL)securelyEncodeObject:forKey:withCoder:error:;
@end
