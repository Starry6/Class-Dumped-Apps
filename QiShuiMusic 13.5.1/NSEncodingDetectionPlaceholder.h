@interface NSEncodingDetectionPlaceholder : NSObject
@property (nonatomic) Q nsEncoding;
@property (nonatomic) I cfEncoding;
@property (nonatomic) NSString string;
@property (nonatomic) * bytes;
@property (nonatomic) Q bytesLength;
- (id)string;
- (void)dealloc;
- (char *)bytes;
- (id)debugDescription;
- (unsigned long long)nsEncoding;
- (unsigned int)cfEncoding;
- (unsigned long long)bytesLength;
+ (id)placeholderForDetector:;
@end
