@interface SFCommandButtonItem : SFButtonItem
@property (nonatomic) SFImage image;
@property (nonatomic) NSString title;
@property (nonatomic) SFCommand command;
@property (nonatomic) NSArray previewButtonItems;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q uniqueId;
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
- (id)command;
- (id)title;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)image;
- (void)setCommand:;
- (id)copyWithZone:;
- (id)previewButtonItems;
- (void)setPreviewButtonItems:;
+ (BOOL)supportsSecureCoding;
@end
