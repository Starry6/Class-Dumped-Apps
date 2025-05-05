@interface SFTextColumnSection : NSObject
@property (nonatomic) NSArray textLines;
@property (nonatomic) BOOL textNoWrap;
@property (nonatomic) Q textWeight;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)setTextLines:;
- (void)setTextNoWrap:;
- (void)setTextWeight:;
- (id)textLines;
- (BOOL)textNoWrap;
- (unsigned long long)textWeight;
- (BOOL)hasTextNoWrap;
- (BOOL)hasTextWeight;
+ (BOOL)supportsSecureCoding;
@end
