@interface BDFileUploadTool : NSObject
+ (id)contextDirPath;
+ (id)createDirPath:;
+ (id)jsonDeserialization:;
+ (id)jsonSerialization:;
+ (id)retryStatesDirPath;
+ (id)signatureAwsHeaders:queryMap:accessKey:secretKey:serviceName:httpMethod:regionName:;
+ (id)signatureAwsHeaders:queryMap:accessKey:secretKey:serviceName:httpMethod:regionName:content:;
+ (id)signatureAwsHeaders:queryMapArrary:accessKey:secretKey:serviceName:httpMethod:regionName:content:;
+ (id)uuidString;
+ (id)cacheDirPath;
+ (id)getLogFilePath;
@end
