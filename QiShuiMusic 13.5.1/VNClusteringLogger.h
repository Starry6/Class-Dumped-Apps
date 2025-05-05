@interface VNClusteringLogger : NSObject
@property (nonatomic) NSURL logFolderURL;
@property (nonatomic) NSURL logFileURL;
@property (nonatomic) BOOL logEnabled;
@property (nonatomic) NSString fileNameBase;
- (void).cxx_destruct;
- (id)initWithOptions:logEnabled:logFileNameBase:;
- (id)initWithOptions:logEnabled:;
- (void)resetFileNameURLWithCurentDateTime;
- (void)logString:;
- (void)logClusterMap:level:;
- (void)logClusterMapL0:;
- (void)logClusterLookupMapL0:;
- (void)logClusterMapL1:;
- (void)logClusterLookupMapL1:;
- (id)logFolderURL;
- (id)logFileURL;
- (BOOL)logEnabled;
- (id)fileNameBase;
+ (BOOL)isLogEnabled;
+ (void)appendString:toLogFile:;
+ (id)padStringWithSpaces:toSize:;
+ (id)currentDateTime;
@end
