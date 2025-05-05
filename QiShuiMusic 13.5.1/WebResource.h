@interface WebResource : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) NSString textEncodingName;
@property (nonatomic) NSString frameName;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)_response;
- (id)URL;
- (id)copyWithZone:;
- (id)MIMEType;
- (id)textEncodingName;
- (id)_stringValue;
- (id)initWithData:URL:MIMEType:textEncodingName:frameName:;
- (id)frameName;
- (id)_suggestedFilename;
- (id)_initWithCoreResource:;
- (id)_coreResource;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithData:URL:MIMEType:textEncodingName:frameName:response:copyData:;
- (id)_initWithData:URL:response:;
+ (id)bundleForClass;
@end
