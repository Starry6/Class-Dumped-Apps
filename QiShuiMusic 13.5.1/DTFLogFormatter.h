@interface DTFLogFormatter : NSObject
@property (nonatomic) NSString sdkVersion;
- (id)fillAddtionField:;
- (id)stringFromLog:;
- (void)verifyLog:;
- (void).cxx_destruct;
- (id)sdkVersion;
- (void)setSdkVersion:;
+ (id)getDatetimeString:;
+ (id)resolutionString;
+ (id)keyPaths;
+ (id)timestampString;
@end
