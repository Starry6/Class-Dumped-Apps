@interface SFTitleSubtitleTuple : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
