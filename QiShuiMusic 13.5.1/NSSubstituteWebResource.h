@interface NSSubstituteWebResource : NSObject
- (void)dealloc;
- (id)data;
- (id)URL;
- (id)MIMEType;
- (id)textEncodingName;
- (Class)_webResourceClass;
- (id)initWithData:URL:MIMEType:textEncodingName:frameName:;
- (id)frameName;
- (id)webResource;
@end
