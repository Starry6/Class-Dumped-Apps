@interface AKCommandLineUtilities : NSObject
@property (nonatomic) NSDateFormatter dateFormatter;
- (id)dateFormatter;
- (void).cxx_destruct;
- (void)createAndExecuteRequestForPath:requestBody:httpMethod:configuration:completion:;
- (id)_hostURL;
- (id)mutableJSONRequestForPath:;
- (id)mutableJSONRequestForURL:;
- (id)errorFromServerResponseBody:;
- (id)jsonDictionaryForData:error:;
@end
