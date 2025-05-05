@interface SFAppLink : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) SFPunchout appPunchout;
@property (nonatomic) SFImage image;
@property (nonatomic) NSInteger imageAlign;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (void)setImage:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)image;
- (id)copyWithZone:;
- (void)setImageAlign:;
- (void)setAppPunchout:;
- (int)imageAlign;
- (BOOL)hasImageAlign;
- (id)appPunchout;
+ (BOOL)supportsSecureCoding;
@end
