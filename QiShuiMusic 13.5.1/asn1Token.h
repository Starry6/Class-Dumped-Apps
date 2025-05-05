@interface asn1Token : NSObject
@property (nonatomic) C tokenClass;
@property (nonatomic) Q identifier;
@property (nonatomic) Q length;
@property (nonatomic) r* content;
- (id)content;
- (unsigned long long)identifier;
- (id)description;
- (unsigned long long)length;
- (id)_initWithID:class:length:content:opaque:;
- (unsigned char)tokenClass;
+ (id)readTokenFromBuffer:opaque:;
+ (id)readTokenFromBuffer:;
+ (id)readOpaqueTokenFromBuffer:;
@end
