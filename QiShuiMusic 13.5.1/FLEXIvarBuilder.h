@interface FLEXIvarBuilder : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString encoding;
@property (nonatomic) Q size;
@property (nonatomic) C alignment;
- (id)initWithName:size:alignment:typeEncoding:;
- (id)name;
- (id)encoding;
- (unsigned long long)size;
- (unsigned char)alignment;
- (void).cxx_destruct;
+ (id)name:size:alignment:typeEncoding:;
@end
