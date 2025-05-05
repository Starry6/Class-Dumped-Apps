@interface BytedCertNetInfo : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSArray binaryDatas;
@property (nonatomic) NSArray binaryNames;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary headerField;
- (void)setBinaryDatas:;
- (void)setHeaderField:;
- (void)setBinaryNames:;
- (id)binaryDatas;
- (id)binaryNames;
- (id)headerField;
- (id)filePath;
- (id)url;
- (id)method;
- (void)setFilePath:;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)params;
- (void)setParams:;
@end
