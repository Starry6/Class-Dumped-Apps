@interface VCVideoRuleCollectionKey : NSObject
@property (nonatomic) NSInteger payload;
@property (nonatomic) C transportType;
@property (nonatomic) C encodingType;
- (int)payload;
- (unsigned char)transportType;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned char)encodingType;
- (id)initWithPayload:transportType:encodingType:;
@end
