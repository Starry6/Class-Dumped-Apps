@interface CNVCardEncoding : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q stringEncoding;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)stringEncoding;
- (id)initWithName:stringEncoding:;
+ (id)standardEncodings;
+ (id)makeStandardEncodings;
+ (id)addPreferredEncoding:toEncodings:;
+ (id)encodingsFromUserDefaults;
+ (id)preferredEncodingInUserDefaults;
+ (id)encodingWithName:stringEncoding:;
+ (id)asciiEncoding;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)utf8Encoding;
@end
