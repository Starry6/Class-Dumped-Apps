@interface PHImportException : NSObject
@property (nonatomic) NSDate createDate;
@property (nonatomic) q type;
@property (nonatomic) NSString path;
@property (nonatomic) NSString sourceCodeFile;
@property (nonatomic) Q lineNumber;
@property (nonatomic) NSError underlyingError;
- (id)path;
- (long long)type;
- (void).cxx_destruct;
- (unsigned long long)lineNumber;
- (id)description;
- (id)underlyingError;
- (id)initWithType:path:underlyingError:file:line:;
- (id)createDate;
- (id)sourceCodeFile;
+ (id)logForAllExceptions:;
@end
