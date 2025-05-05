@interface HMDFileUploadRequest : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString logType;
@property (nonatomic) NSString scene;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSString path;
@property (nonatomic) BOOL byUser;
@property (nonatomic) @? finishBlock;
- (BOOL)byUser;
- (id)commonParams;
- (void)setByUser:;
- (void)setCommonParams:;
- (id)filePath;
- (id)path;
- (void)setScene:;
- (id)logType;
- (void)setPath:;
- (void)setFilePath:;
- (id)scene;
- (void).cxx_destruct;
- (void)setLogType:;
- (id)finishBlock;
- (void)setFinishBlock:;
@end
