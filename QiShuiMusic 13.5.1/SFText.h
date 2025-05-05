@interface SFText : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) Q maxLines;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMaxLines:;
- (id)initWithProtobuf:;
- (unsigned short)characterAtIndex:;
- (void)setText:;
- (unsigned long long)maxLines;
- (id)initWithCoder:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)dictionaryRepresentation;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMaxLines;
+ (id)textWithString:;
+ (BOOL)supportsSecureCoding;
@end
