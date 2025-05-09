@interface PhotosControlCommand : NSObject
- (id)init;
- (id)formatDuration:;
- (int)run;
- (void).cxx_destruct;
- (id)description;
- (id)initWithArgc:argv:;
- (BOOL)processOption:arg:;
- (void)willProcessOptions;
- (BOOL)processArgc:argv:;
- (id)args;
- (id)invokedName;
- (void)outputJsonObject:;
- (void)outputCompactJsonObject:;
- (void)output:;
- (void)outputError:;
- (void)outputErrorWithJsonOutput:format:;
- (void)output:arguments:;
- (void)outputError:arguments:;
- (id)dataForPathOrStdin:;
- (BOOL)writeData:toPathOrStdout:;
+ (id)usage;
+ (id)name;
+ (id)usagesummary;
+ (id)optstring;
+ (id)longopts;
+ (id)abbreviations;
+ (long long)minimumArgs;
+ (long long)maximumArgs;
@end
