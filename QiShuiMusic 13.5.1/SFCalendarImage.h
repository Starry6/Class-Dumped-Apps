@interface SFCalendarImage : SFImage
@property (nonatomic) NSDate date;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSData imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString keyColor;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSInteger cornerRoundingStyle;
@property (nonatomic) NSString accessibilityLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)initWithDate:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
