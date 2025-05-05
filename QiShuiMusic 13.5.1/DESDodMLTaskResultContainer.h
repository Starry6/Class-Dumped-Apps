@interface DESDodMLTaskResultContainer : NSObject
@property (nonatomic) NSDictionary JSONResult;
@property (nonatomic) NSURL binaryResultURL;
@property (nonatomic) NSString sandboxExtension;
@property (nonatomic) double duration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sandboxExtension;
- (id)description;
- (double)duration;
- (id)copyWithZone:;
- (id)JSONResult;
- (id)initWithJSONResult:binaryResultURL:sandboxExtension:duration:;
- (id)taskResultWithError:;
- (id)binaryResultURL;
+ (BOOL)supportsSecureCoding;
@end
